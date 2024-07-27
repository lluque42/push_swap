/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_libft_additions_bonus.h                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lluque <lluque@student.42malaga.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 13:18:26 by lluque            #+#    #+#             */
/*   Updated: 2024/07/27 12:22:40 by lluque           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file ps_libft_additions_bonus.h
 * Set of additional generic functions needed for this project to be added
 * in the future to libft.
*/

#ifndef PS_LIBFT_ADDITIONS_BONUS_H
# define PS_LIBFT_ADDITIONS_BONUS_H
# include "libft.h"

/**
 * @brief <b>ft_abs</b> -- Returns absolute value of int as long.
 * 
 * @param [in] value - Positive or negative integer.
 *
 * @return A long positive value that is the absolute value of passed integer.
 *
 * @warning ft_abs(INT_MIN) returns a positive value greater than INT_MAX.
 */
long	ft_abs(int value);

/**
 * @brief <b>ft_dlclst_peek_offset</b> -- Returns content of list element by
 * offset from head.
 *
 *
 * @param [in] head - The head (first element) of the list.
 * 
 * @param [in] offset - Positions from head in the next (positive offset) or
 * the prev (negative offset) direction.
 * 
 * @return A void pointer to the content of the referenced element.  
 * NULL pointer is returned if head is NULL or the offset is invalid.
 *
 * @warning Offset absolute values greater than size are considered invalid
 * and NULL is returned.
 */
void	*ft_dlclst_peek_offset(t_dlclst *head, int offset);

/**
 * @brief <b>ft_dlclst_peek_pos</b> -- Returns content of list element in
 * position.
 *
 * @details Returns the content of the list element in position.
 * TODO coletilla sobre la interpretacion circular de pos.
 *
 * @param [in] lst - The pointer to the first element of the list.
 * 
 * @param [in] pos - Position in the next direction from the head of the list.
 * 
 * @return A void pointer to the content of the referenced element.  
 * NULL pointer is returned if head is NULL or the offset is invalid.
 *
 * @warning Offset absolute values greater than size are considered invalid
 * and NULL is returned.
 */
void	*ft_dlclst_peek_pos(t_dlclst *lst, unsigned int pos);

#endif
