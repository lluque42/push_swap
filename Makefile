# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lluque <lluque@student.42malaga.com>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/24 14:23:32 by lluque            #+#    #+#              #
#    Updated: 2024/02/05 20:42:23 by lluque           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Directories for source code, tester and headers (permanent), and for
# object files and binary output (volatile).
# (relative to repository root directory)
#
SRC_DIR = ./src/
INC_DIR = ./include/
TEST_DIR = ./test/
BIN_DIR = ./bin/
OBJ_DIR = ./obj/
LIBFT_DIR = ./lib/libft/

# Library libft binary
LIBFT_BIN = $(LIBFT_DIR)bin/libft.a

# Library libft include dir
LIBFT_INC = $(LIBFT_DIR)include/

# Resulting library name (to be placed in BIN_DIR)
NAME = push_swap

# Resulting bonus output name (to be placed in BIN_DIR)
#BONUS_NAME = ???

# Resulting tester name (to be placed in BIN_DIR)
TESTER_NAME = tester

# Default value of DEBUG (if passed from command line DEBUG=yes overrides it)
DEBUG = no

# Optional debugging flags
DEB_FLAGS = -g -fsanitize=address

# Compiler flags, conditional to DEBUG value
ifeq ($(DEBUG), no)
	CC_FLAGS = -Wall -Werror -Wextra
else
	CC_FLAGS = -Wall -Werror -Wextra $(DEB_FLAGS)
endif

# List of header file names that, if modified, should force recompiling
INCLUDES = $(INC_DIR)ps_lang.h \
		   $(INC_DIR)dlclst_int_utils.h \
		   $(INC_DIR)main_utils.h

# List of source code file names with path relative to SRC_DIR
SOURCES = ps_main.c \
		  main_utils.c \
		  ps_lang/swap.c \
		  ps_lang/push.c \
		  ps_lang/rotate.c \
		  ps_lang/rrotate.c \
		  ps_lang/utils.c \
		  ps_lang/print.c \
		  dlclst_int_utils/del.c \
		  dlclst_int_utils/compare.c \
		  dlclst_int_utils/print.c \
		  dlclst_int_utils/is_sorted.c

# Auto generated list of object file names from SOURCES
# (here the path is relative to repository's root)
#
OBJECTS = $(SOURCES:%.c=$(OBJ_DIR)%.o)

# List of tester source code file names with path relative to TEST_DIR
TEST_SRC = tester.c

################################################################################
############### VARIABLES FOR DOXYGEN DOCUMENTATION GENERATION #################

# Doxyfile name, to be generated and edited in repository root directory
DOXYFILE = Doxyfile
DOC_DIR = ./doc/

# Project name for documentation purposes
DOX_PROJECT_NAME = Push Swap

# Project brief description (one line)
DOX_PROJECT_BRIEF = Push_swap project for Campus 42

# Version of the documentation (date for now)
DOX_PROJECT_NUMBER = $(shell date +%Y-%m-%d)

# Location with files to extract documentation from (.h)
# Look for more files in subdirectories
#
DOX_INPUT = $(INC_DIR) $(DOX_MAIN_PAGE)
DOX_RECURSIVE = YES

# Content for documentation main page
DOX_MAIN_PAGE = ./README.md

# Optimization for languages
DOX_OPTIMIZE_OUTPUT_FOR_C = YES

# Documentation formats to generate
DOX_GENERATE_HTML = YES
DOX_GENERATE_LATEX = NO
DOX_GENERATE_RTF = NO
DOX_GENERATE_MAN = YES

################ VARIABLES FOR DOXYGEN DOCUMENTATION GENERATION ################
################################################################################

# Default rule
all: $(BIN_DIR)$(NAME)

# Rule to link the program
$(BIN_DIR)$(NAME): $(OBJECTS) $(LIBFT_BIN) 
	@echo ----------------------------------------------------------------------
	@echo
	@echo "          --- Linking the program to $(BIN_DIR)$(NAME) ---"
	mkdir -p $(@D)
	cc $(CC_FLAGS) $(OBJECTS) $(LIBFT_BIN) -o $(BIN_DIR)$(NAME) -I$(INC_DIR) -I$(LIBFT_INC)
	@echo
	@echo ----------------------------------------------------------------------

################################################################################
################## START OF PATTERN RULE TO COMPILE OBJECTS ####################
# Pattern rule to individually compile each object:
#
# 	targets: target-pattern: requisite-pattern extra-req1 extra-req2...
# 	|			|				|				|
# 	|			|				|				|___ more requisites
# 	|			|				|
# 	|			|				|___ ./src/what_matches.c -> ./src/%.c 
#	|			|
# 	|			|________ ./obj/what_matches.o -> ./obj/%.o 
# 	|
# 	|______./obj/file1.o ./obj/file2.o ./obj/file3.o ./obj/file4.o...   
#
# From GNU make manual:
# 	"The target-pattern and prereq-patterns say how to compute the prerequisites
# 	of each target. Each target is matched against the target-pattern to extract
# 	a part of the target name, called the stem. This stem is substituted into
# 	each of the prereq-patterns to make the prerequisite names (one from each
# 	prereq-pattern)."
#
# (1) The wildcard '%' in target-pattern is determined for each target when
# matching the pattern. (2) On the requisite-pattern side, the '%' resolves to
# whatever was determined in the target-pattern side. Thus:
#
#	OBJ_DIR is included in target-pattern because of (1), so it is not included
#	as part of '%' when sustituted in requisite-pattern side.
#
#	SRC_DIR is included in requisite pattern in order to have the complete
#	path and name of each requisite when '%' gets substituted in the requisite-
#	pattern side.
#
# The automatic variables:
#	$^ replaced by the name of ALL prerequisites
#	$< replaced by the name of FIRST prerequisites
#	$@ replaced by the name of the target
#
#	Using $< instead of $^ allows to correctly introduce more prerequisites
#	in a pattern rule.
#
# The expression:
# 	$(dir $@) 	equivalent to	$(@D)
# Resolves to the directory part of the target, excluding the file name.
# For just the name file:
# 	$(notdir $@) 	equivalent to	$(@F)
#
# Notice the headers as extra pre-requisites to force a recompiling if
# modified.
#
$(OBJECTS): $(OBJ_DIR)%.o: $(SRC_DIR)%.c $(INCLUDES)
	@echo ----------------------------------------------------------------------
	@echo
	@echo "              --- Compiling objects to $(OBJ_DIR)*.o ---"
	mkdir -p $(@D)
	cc $(CC_FLAGS) -c $< -o $@ -I$(INC_DIR) -I$(LIBFT_INC)
	@echo
	@echo ----------------------------------------------------------------------
################### END OF PATTERN RULE TO COMPILE OBJECTS #####################
################################################################################

# Library libft compilation
$(LIBFT_BIN):
ifeq ($(DEBUG), no)
	make --directory=$(LIBFT_DIR)
else
	make --directory=$(LIBFT_DIR) DEBUG=yes
endif

# Cleaning rule: deletes object files and directory.
# Possible additions to the recipe:
# 	rm -rf $(BONUS_OBJ_DIR)
# 	make clean --directory=$(SOME_LIBRARY_PATH)
#
clean:
	@echo ----------------------------------------------------------------------
	@echo
	@echo "                          --- Cleaning ---"
	@echo
	rm -rf $(OBJ_DIR)
	make clean --directory=$(LIBFT_DIR)
	@echo
	@echo ----------------------------------------------------------------------

# Full cleaning rule: deletes objects files, all binary outputs, and directories
# Possible additions to the recipe:
# 	make fclean --directory=$(SOME_ANOTHER_LIBRARY_PATH)
#
fclean:clean
	@echo ----------------------------------------------------------------------
	@echo
	@echo "                          --- Fcleaning ---"
	@echo
	rm -rf $(BIN_DIR)
	make fclean --directory=$(LIBFT_DIR)
	@echo
	@echo ----------------------------------------------------------------------

# Rebuild rule: deletes objects files and all outputs, then compiles again
re: fclean all

$(DOXYFILE):
	@echo ----------------------------------------------------------------------
	@echo
	@echo "      --- Generating default Doxyfile configuration file ---"
	@echo
	doxygen -g $(DOXYFILE)
	@echo
	@echo "        --- Customizing Doxyfile configuration file ---"
	@echo
	sed -i '/^PROJECT_NAME.*=/s/^.*$$/PROJECT_NAME = "$(DOX_PROJECT_NAME)"/' $(DOXYFILE)
	sed -i '/^PROJECT_NUMBER.*=/s/^.*$$/PROJECT_NUMBER = $(DOX_PROJECT_NUMBER)/' $(DOXYFILE)
	sed -i '/^PROJECT_BRIEF.*=/s/^.*$$/PROJECT_BRIEF = "$(DOX_PROJECT_BRIEF)"/' $(DOXYFILE)
	sed -i '\|^OUTPUT_DIR.*=|s|^.*$$|OUTPUT_DIRECTORY = $(DOC_DIR)|' $(DOXYFILE)
	sed -i '\|^INPUT .*=|s|^.*$$|INPUT = $(DOX_INPUT)|' $(DOXYFILE)
	sed -i '/^RECURSIVE.*=/s/^.*$$/RECURSIVE = $(DOX_RECURSIVE)/' $(DOXYFILE)
	sed -i '/^OPTIMIZE_OUTPUT_FOR_C.*=/s/^.*$$/OPTIMIZE_OUTPUT_FOR_C = $(DOX_OPTIMIZE_OUTPUT_FOR_C)/' $(DOXYFILE)
	sed -i '\|^USE_MDFILE_AS_MAINPAGE.*=|s|^.*$$|USE_MDFILE_AS_MAINPAGE = $(DOX_MAIN_PAGE)|' $(DOXYFILE)
	sed -i '/^GENERATE_HTML .*=/s/^.*$$/GENERATE_HTML = $(DOX_GENERATE_HTML)/' $(DOXYFILE)
	sed -i '/^GENERATE_LATEX.*=/s/^.*$$/GENERATE_LATEX = $(DOX_GENERATE_LATEX)/' $(DOXYFILE)
	sed -i '/^GENERATE_RTF.*=/s/^.*$$/GENERATE_RTF = $(DOX_GENERATE_RTF)/' $(DOXYFILE)
	sed -i '/^GENERATE_MAN.*=/s/^.*$$/GENERATE_MAN = $(DOX_GENERATE_MAN)/' $(DOXYFILE)
	@echo
	@echo ----------------------------------------------------------------------

doc: $(DOXYFILE)
	@echo ----------------------------------------------------------------------
	@echo
	@echo "      --- Generating project documentation ($(DOC_DIR)) ---"
	@echo
	doxygen $(DOXYFILE)
	@echo
	@echo ----------------------------------------------------------------------

docclean:
	@echo ----------------------------------------------------------------------
	@echo
	@echo "      --- Cleaning documentation directory and Doxyfile ---"
	@echo
	rm -rf $(DOC_DIR)
	rm $(DOXYFILE)
	@echo
	@echo ----------------------------------------------------------------------

tester: $(BIN_DIR)$(TESTER_NAME)

$(BIN_DIR)$(TESTER_NAME): $(TEST_DIR)$(TEST_SRC) $(BIN_DIR)$(NAME)
	@echo ----------------------------------------------------------------------
	@echo
	@echo "        --- Compiling tester to $(BIN_DIR)$(TESTER_NAME) ---"
	@echo
	cc $(CC_FLAGS) $(TEST_DIR)$(TEST_SRC) $(BIN_DIR)$(NAME) -o $(BIN_DIR)$(TESTER_NAME) -I$(INC_DIR) -I$(TEST_DIR) 
	@echo
	@echo ----------------------------------------------------------------------

# Help rule: because I use to forget everything
help:
	@echo ----------------------------------------------------------------------
	@echo
	@echo "                          --- Ayuda ---"
	@echo
	@echo "    usar 'make', 'make all' o 'make $(BIN_DIR)$(NAME)' para compilar el proyecto base como: $(BIN_DIR)$(NAME)"
	@echo "    usar 'make bonus' para compilar el bonus (en caso de estar disponible) como $(BIN_DIR)$(BONUS_NAME)"
	@echo "    usar 'make tester' para compilar el programa de pruebas (en caso de estar disponible) como $(BIN_DIR)$(TESTER_NAME)"
	@echo "    usar 'make clean' para borrar los archivos .o y su directorio $(OBJ_DIR)"
	@echo "    usar 'make fclean para hacer 'clean' y ademas borrar todos los binarios y su directorio $(BIN_DIR)"
	@echo "    usar 'make re' para hacer 'fclean' y luego 'all'"
	@echo "    usar 'make ... DEBUG=yes' para hacer todas las compilaciones con estos flags adicionales:"
	@echo "          $(DEB_FLAGS)"
	@echo "    usar 'make help' para mostrar esta ayuda"
	@echo
	@echo ----------------------------------------------------------------------

# Phonies: this list of words are never to be interpreted as files but
# only as rule names
#
.PHONY: all clean fclean re tester help bonus doc docclean
