/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkongim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 20:08:14 by kkongim           #+#    #+#             */
/*   Updated: 2022/03/05 17:53:20 by kkongim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_checkset(char const *set, char c)
{
	size_t	size;

	size = 0;
	while (set[size])
	{
		if (set[size] == c)
			return (1);
		size++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*res;
	size_t	start;
	size_t	end;
	size_t	len;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	end = ft_strlen(s1);
	while (s1[start] && ft_checkset(set, s1[start]))
		start++;
	while (end > start && ft_checkset(set, s1[end - 1]))
		end--;
	res = (char *)malloc(sizeof(*s1) * (end - start + 1));
	if (!res)
		return (NULL);
	len = 0;
	while (start < end)
		res[len++] = s1[start++];
	res[len] = '\0';
	return (res);
}
