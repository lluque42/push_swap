/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_bonus.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lluque <lluque@student.42malaga.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 10:08:18 by lluque            #+#    #+#             */
/*   Updated: 2024/07/27 23:51:42 by lluque           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file checker_bonus.h
 * Main project header to include every other project specific headers.
*/
#ifndef CHECKER_BONUS_H
# define CHECKER_BONUS_H

/**
 * @def MAKE_DEBUG_LVL
 * When building with "make ... MAKE_DEBUG_LVL=xxx" more output is generated for
 * debugging purposes.
 */
# ifndef MAKE_DEBUG_LVL
#  define MAKE_DEBUG_LVL 0
# endif

# include "ps_lang_bonus.h"
# include "ps_dlclst_int_utils_bonus.h"
# include "ps_libft_additions_bonus.h"
# include "ps_main_utils_bonus.h"

#endif
