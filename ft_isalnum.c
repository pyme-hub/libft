/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkongim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 20:02:40 by kkongim           #+#    #+#             */
/*   Updated: 2022/02/21 20:02:42 by kkongim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
RETURN VALUES
	The isalnum() function returns zero if the character tests false
	and returns non-zero if the character tests true.
*/
#include "libft.h"

int	ft_isalnum(int c)
{
	if (ft_isdigit(c) || ft_isalpha(c))
		return (c);
	return (0);
}
