/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkongim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 20:08:03 by kkongim           #+#    #+#             */
/*   Updated: 2022/03/05 17:54:03 by kkongim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	size_t	i;

	i = ft_strlen(str);
	if ((char)c == '\0')
		return ((char *)str + i);
	while (i--)
	{
		if (str[i] == (char)c)
			return ((char *)(str + i));
	}
	return (0);
}
