/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_dlclst_element_utils.h                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lluque <lluque@student.42malaga.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 00:14:56 by lluque            #+#    #+#             */
/*   Updated: 2024/07/29 21:09:57 by lluque           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file ps_dlclst_element_utils.h
 * Set of function to be used with dlclst (Doubly linked circular list libft's
 * implementation) when list content is of t_element struct type.
*/

#ifndef PS_DLCLST_ELEMENT_UTILS_H
# define PS_DLCLST_ELEMENT_UTILS_H
# include "libft.h"

/**
 * @struct s_element
 * @brief Base for typedef <b>t_element</b> to represent each number and its
 * sorting metadata.
 * @details This type is to be used as the list node content member of each
 * stack.
 * @var s_element::value
 * The integer value of the element.
 * @var s_element::pos_when_sorted
 * Refers to the target position, that is, the position this element will
 * have when in the full and sorted stack a.
 * @var s_element::pos_in_stack
 * Refers to the current position of this element in the stack it is currently
 * in.
 * @var s_element::cost_a
 * TODO
 * @var s_element::cost_b
 * TODO
*/
typedef struct s_element
{
	int		value;
	int		pos_when_sorted;
	int		pos_in_stack;
	int		cost_a;
	int		cost_b;
}	t_element;
/**
 * @typedef t_element
 * Based on the @link s_element @endlink struct.
 */

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
 * @brief <b>compare</b> -- Compare two elements passed as void pointers.
 *
 * @param [in] element_a - Void pointer to a t_element.
 *
 * @param [in] element_b - Void pointer to an t_element.
 *
 * @return Non-zero value if elements are equal.
*/
int		compare(void *element_a, void *element_b);

/**
 * @brief <b>del</b> -- Frees memory of void pointer to element.
 *
 * @param [in] element - Void pointer to a t_element to be freed.
 *
 * @warning EXTERNAL FUNCTION USED: malloc().
*/
void	del(void *element);

/**
 * @brief <b>print</b> -- Prints element value pointed to by void pointer.
 *
 * @param [in] element - Void pointer to t_element.
 *
 * @warning EXTERNAL FUNCTION USED: write().
*/
void	print(void *element);

/**
 * @brief <b>is_sorted</b> -- Scan a dlclst of elements to check if sorted.
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

/**
 * @brief <b>get_value</b> -- Returns integer value associated to the element
 * in a dlclst node.
 *
 * @param [in] element - Void pointer to t_element.
 *
 * @return The integer value as storaged in the required member of the t_element
 * in node content member
*/
int		get_value(void *element);

/**
 * @brief <b>get_pos_when_sorted</b> -- Returns pos_when_sorted member of the
 * element in a dlclst node.
 *
 * @param [in] element - Void pointer to t_element.
 *
 * @return The integer value as storaged in the required member of the t_element
 * in node content member
*/
int		get_pos_when_sorted(void *element);

/**
 * @brief <b>get_current_pos_in_stack</b> -- Returns current_pos_in_stack member
 * of the element in a dlclst node.
 *
 * @param [in] element - Void pointer to t_element.
 *
 * @return The integer value as storaged in the required member of the t_element
 * in node content member
*/
int		get_current_pos_in_stack(void *element);

/**
 * @brief <b>get_cost_a</b> -- Returns cost_a member of the element in
 * a dlclst node.
 *
 * @param [in] element - Void pointer to t_element.
 *
 * @return The integer value as storaged in the required member of the t_element
 * in node content member
*/
int		get_cost_a(void *element);

/**
 * @brief <b>get_cost_b</b> -- Returns cost_b member of the element in
 * a dlclst node.
 *
 * @param [in] element - Void pointer to t_element.
 *
 * @return The integer value as storaged in the required member of the t_element
 * in node content member
*/
int		get_cost_b(void *element);

/**
 * @brief <b>set_cost_a</b> -- Sets cost_a member of the element in
 * a dlclst node.
 *
 * @param [in] element - Void pointer to t_element.
*/
void	set_cost_a(void *element, int cost_a);

/**
 * @brief <b>set_cost_b</b> -- Sets cost_b member of the element in
 * a dlclst node.
 *
 * @param [in] element - Void pointer to t_element.
*/
void	set_cost_b(void *element, int cost_b);

#endif
