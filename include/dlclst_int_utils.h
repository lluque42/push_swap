/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dlclst_int_utils.h                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lluque <lluque@student.42malaga.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 00:14:56 by lluque            #+#    #+#             */
/*   Updated: 2024/02/05 00:27:46 by lluque           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file dlclst_int_utils.h
 * Set of function to be used with dlclst (Doubly linked circular list libft's
 * implementation) when list content is of integer type.
*/

#ifndef DLCLST_INT_UTILS_H
# define DLCLST_INT_UTILS_H

/**
 * @brief <b>compare</b> -- Compare two integers passed as void pointers.
 *
 * @param [in] a - Void pointer to an integer.
 *
 * @param [in] b - Void pointer to an integer.
 *
 * @return Non-zero value if pointed values are equal.
*/
int		compare(void *a, void *b);

/**
 * @brief <b>del</b> -- Frees memory of void pointer to int.
 *
 * @param [in] content - Void pointer to an integer to be freed.
 *
 * @warning EXTERNAL FUNCTION USED: malloc().
*/
void	del(void *content);

/**
 * @brief <b>print</b> -- Prints integer value pointed to by void pointer.
 *
 * @param [in] content - Void pointer to an integer.
 *
 * @warning EXTERNAL FUNCTION USED: write().
*/
void	print(void *content);

#endif
