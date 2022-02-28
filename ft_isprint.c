/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkongim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 20:03:11 by kkongim           #+#    #+#             */
/*   Updated: 2022/02/21 20:27:03 by kkongim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
RETURN VALUES
	The isprint() function returns zero if the character tests false
	and returns non-zero if the character
	tests true.
*/
#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c < 127)
		return (c);
	else
		return (0);
}
