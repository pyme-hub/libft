/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkongim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 20:03:04 by kkongim           #+#    #+#             */
/*   Updated: 2022/02/21 20:03:05 by kkongim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*RETURN VALUES
	The isdigit() functions return zero if the character tests false
	and return non-zero if the character tests true.
*/
#include "libc.h"

int	ft_isdigit(int c)
{
	if (c < '0' || c > '9')
		return (0);
	return (c);
}
