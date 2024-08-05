/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   readme.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lluque <lluque@student.42malaga.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 19:49:16 by lluque            #+#    #+#             */
/*   Updated: 2024/07/29 17:27:26 by lluque           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//# 42's push\_swap project
//
//Luis Luque (lluque) - 2024
//
//Message to other 42 students: DO NOT COPY, get inspired!
//
//## Introduction
//
//From project's subject:
//> You have 2 stacks named a and b.
//> * At the beginning:
//>    * The stack a contains a random amount of negative and/or positive
//> numbers which cannot be duplicated.
//>    * The stack b is empty.
//> * The goal is to sort in ascending order numbers into stack a. To do so
//> you have the following operations at your disposal:
//>    * **sa (swap a)**: Swap the first 2 elements at the top of stack a.
//> Do nothing if there is only one or no elements.
//>    * **sb (swap b)**: Swap the first 2 elements at the top of stack b.
//> Do nothing if there is only one or no elements.
//> ss : sa and sb at the same time.
//>    * **pa (push a)**: Take the first element at the top of b and put it
//> at the top of a. Do nothing if b is empty.
//>    * **pb (push b)**: Take the first element at the top of a and put it
//> at the top of b. Do nothing if a is empty.
//>    * **ra (rotate a)**: Shift up all elements of stack a by 1.
//> The first element becomes the last one.
//>    * **rb (rotate b)**: Shift up all elements of stack b by 1.
//> The first element becomes the last one.
//>    * **rr**: ra and rb at the same time.
//>    * **rra (reverse rotate a)**: Shift down all elements of stack a by 1.
//> The last element becomes the first one.
//>    * **rrb (reverse rotate b)**: Shift down all elements of stack b by 1.
//> The last element becomes the first one.
//>    * **rrr**: rra and rrb at the same time..
//
//## Directory tree
//
//    ./  
//    ├── .gitignore				(to prevent undesired files to be stagged)  
//    ├── Doxyfile				(doxygen config file for doc generation)  
//    ├── Makefile				(use 'make help' for instructions)  
//    ├── README.md				(brief documentation)  
//    ├── doc/					(documentation extracted from comments in .h)  
//    │   ├── html/				(html documentation)  
//    │   │   ├── ...  
//    │   │   ├── index.html		(entry point for html documentation)  
//    │   │   ├── ...  
//    │   └── man/				(man pages documentation)  
//    │       └── man3/  
//    │           └── ...			(example of use: 'man -l ft_string.h.3')  
//    ├── include/				(directory for public header files (.h))  
//    │   ├── ...  
//    │   └── ...  
//    ├── src/					(dir for source code and private header files)  
//    │   ├── ...  
//    │   │   ├── ...  				
//    │   │   └── ...  
//    │   └── ...					(may be structured in several directories)  
//    │       ├── ...  
//    │       └── ...  
//    ├── lib/					(external libraries)  
//    │   ├── ...  
//    │   └── libft				(each library in its own directory)  
//    ├── bin/					(directory for project's binaries and tester)  
//    │   ├── ...  
//    │   └── ...					(may be structured in several directories)  
//    ├── obj/					(dir for source code and private header files)  
//    │   ├── ...  
//    │   │   ├── ...  
//    │   │   └── ...  
//    │   └── ...					(structured as in ./src)  
//    │       ├── ...  
//    │       └── ...  
//    └── test/					(test program src code)  
//        ├── ...  
//        ├── tester.c  
//        └── ...  
//
//## Compilation instructions
//
//Use ‘make help’ for instructions.
//
//## Data structures
//The main struct type of the program, where both stacks a and b are referenced
//as doubly linked circular lists.
//```
//typedef struct s_ps_stacks
//{
//    t_dlclst    *a;
//    t_dlclst    *b;
//    int         left_to_pre_sort;
//}   t_ps_stacks;
//```
//The element struct type, where each of the numbers is storaged, along to its
//sorting metadata. The element type is that which is linked to the *content*
//member of the dlclst node.
//```
//typedef struct s_element
//{
//    int     value;
//    int     pos_when_sorted;
//    int     current_pos_in_stack;
//    int     cost_a;
//    int     cost_b;
//}   t_element;
//```
//## The sorting algorithm
//### Introduction
//A careful reading of the subject makes it obvious that the only optimization
//is regarding the number of ps_lang instructions that must be used to sort
//the numbers. That is, whatever it takes to achieve that is not only
//legitimate but neccesary.
//
//In this line, the approach taken is to "cheat" by ordering the list first
//with some classical-don't-care-how-efficient algorithm and, using its
//results, statistical analysis, etc. find out the minimum number of ps_lang
//instructions to get to the same results.
//
//The sorting process begins just with that: **classic sorting** the numbers
//only to attach to each element the position it will have in the sorted list.
//This pos_when_ordered is the key to the second step of the sorting process:
//**pre-sorting**.
//
//**Pre-sorting** is the process to smartly push to stack B every element in
//stack A but three. Before pushing to B, the pos_when_ordered of each element
//in A, as well as the mean of the pos_when_ordered of the elements still in
//stack A, determines if either the top A element, the next-to-top A element,
//the bottom A element, and the next_to_bottom A element (???????????) will be
//push to B. Pre-sorting ends after sortin the only three remaining elements
//in stack A which will serve as the reference for the next stage where the
//elements in stack B are pushed to A according to the costs analysis.
//
//**Cost-based pushing** is the stage of the sorting process where stack B is
//empty by using a sequence of ps_lang instructions (which may affect both
//stacks) ending, of course, with a final pa.
//
//Cost-based pushing is a loop that only breaks when stack B is empty, in this
//loop the following is performed:
//* Set positions in stack to every element in both stack A and B. This is
//the relative position each element has in the stack it is in.
//* Set costs values for every element in stack B.
//    * There are two costs values: cost_a and cost_b. Each represent TODO!!!!!!!!!!!!!!!!!!!
//* Find the lowest cost among the elements in stack B.
//    * The total cost for each element is the sum of cost_a and cost_b. The
//    element that currently has the lowest cost is the one that will be pushed
//    to A. Of course, there's a lot to do before actually pa'ing...
//* Rotate before pa: This is the sequence of rotations needed before calling
//the pa instructions. That is, the rotations needed to:
//    * Place the desired (lowest cost) element in stack B in the top of the
//    stack.
//    * Reorder stack A so that when pa'ing the desired element in stack B
//    lands in the desired position (sorted) in stack A.
//* Finally, a pa to push the right element in stack B to the right position
//in stack A.
//
//**Rotate stack A until sorted** As the result of Cost-based pushing, Stack B
//is empty and the elements in Stack A are CIRCULARLY sorted. In this final
//stage the stack A is rotated in the best direction to get it LINEARLY sorted.
#ifndef README_H
# define README_H

void	dummy(void);

#endif
