/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkongim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 20:02:48 by kkongim           #+#    #+#             */
/*   Updated: 2022/02/21 20:02:50 by kkongim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* RETURN VALUES
	The isalpha() function returns zero if the character tests
 	false and returns non-zero if the character tests true.
*/
#include "libc.h"

int	ft_isalpha(int c)
{
	if (c < 'A' || (c > 'Z' && c < 'a') || c > 'z')
	{
		return (0);
	}
	return (c);
}
