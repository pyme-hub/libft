/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkongim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 20:08:40 by kkongim           #+#    #+#             */
/*   Updated: 2022/02/21 20:08:43 by kkongim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
int
tolower(int c);
DESCRIPTION
	The tolower() function converts an upper-case letter to the corresponding
	lower-case letter.  The argument must be representable as an unsigned char
	or the value of EOF.

RETURN VALUES
	If the argument is an upper-case letter, the tolower() function returns
	the corresponding lower-case letter if there is one;
	otherwise, the argument is returned unchanged.
*/
#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c = c + 32;
	return (c);
}
