/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkongim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 20:05:41 by kkongim           #+#    #+#             */
/*   Updated: 2022/03/05 17:52:25 by kkongim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (*(s + i) != '\0')
	{
		if (*((char *)s + i) == (unsigned char)c)
		{
			return ((char *)(s + i));
		}
		i++;
	}
	if (*(s + i) == c)
		return ((char *)(s + i));
	return (0);
}
