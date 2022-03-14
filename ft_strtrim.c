/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkongim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 20:08:14 by kkongim           #+#    #+#             */
/*   Updated: 2022/03/12 15:38:21 by kkongim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*result;
	char	*new;
	size_t	start;
	size_t	end;
	size_t	size_s;

	new = (char *)s1;
	result = 0;
	if (s1 != 0 && set != 0)
	{
		start = 0;
		end = ft_strlen(s1);
		while (s1[start] && ft_strchr(set, s1[start]))
			++start;
		while (s1[end - 1] && ft_strchr(set, s1[end - 1]) && end > start)
			--end;
		size_s = end - start + 1;
		result = (char *)malloc(sizeof(char) * size_s);
		if (result)
			ft_strlcpy(result, &new[start], size_s);
	}
	return (result);
}
