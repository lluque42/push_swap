/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lluque <lluque@student.42malaga.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 10:08:18 by lluque            #+#    #+#             */
/*   Updated: 2024/07/28 15:41:46 by lluque           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file push_swap.h
 * Main project header to include every other project specific headers.
*/
#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

/**
 * @def MAKE_DEBUG_LVL
 * When building with "make ... MAKE_DEBUG_LVL=xxx" more output is generated for
 * debugging purposes.
 */
# ifndef MAKE_DEBUG_LVL
#  define MAKE_DEBUG_LVL 0
# endif

# include "ps_lang.h"
# include "ps_dlclst_element_utils.h"
# include "ps_libft_additions.h"
# include "ps_main_utils.h"
# include "ps_sort.h"

#endif
