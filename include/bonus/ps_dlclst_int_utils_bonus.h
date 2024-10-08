/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_dlclst_int_utils_bonus.h                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lluque <lluque@student.42malaga.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 00:14:56 by lluque            #+#    #+#             */
/*   Updated: 2024/07/27 14:23:07 by lluque           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file ps_dlclst_int_utils_bonus.h
 * Set of function to be used with dlclst (Doubly linked circular list libft's
 * implementation) when list content is of integer type.
*/

#ifndef PS_DLCLST_INT_UTILS_BONUS_H
# define PS_DLCLST_INT_UTILS_BONUS_H
# include "libft.h"

/**
 * @enum e_sortdir
 * @brief Base for typedef <b>t_sortdir</b> to use with list sorting
 * related functions.
 * @details This type is used to indicate a sorting direction for functions
 * related to lists sorting.
 * @var e_sortdir::ASCENDING
 * Represents ascending order.
 * @var e_sortdir::DESCENDING
 * Represents descending order.
*/
typedef enum e_sortdir
{
	ASCENDING,
	DESCENDING
}				t_sortdir;
/**
 * @typedef t_sortdir
 * Based on the @link e_sortdir @endlink enum to indicate the sorting direction.
 */

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

/**
 * @brief <b>is_sorted</b> -- Scan a dlclst of integers to check if sorted.
 *
 * @param [in] lst - Pointer to a list.
 *
 * @param [in] direction - Sorting direction.
 *
 * @return A value of 1 if list is sorted in the indicated direction, a value
 * of 0 otherwise.  
 * A value of -1 if lst is NULL.
*/
int		is_sorted(t_dlclst *lst, t_sortdir direction);

#endif
