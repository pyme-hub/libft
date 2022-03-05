/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkongim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 20:08:27 by kkongim           #+#    #+#             */
/*   Updated: 2022/03/05 17:53:25 by kkongim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	size_t	i;

	if (!s)
		return (NULL);
	if (len == 0 || start + 1 > ft_strlen(s))
	{
		ptr = (char *)malloc(sizeof(char));
		*ptr = '\0';
		return (ptr);
	}
	if (len >= ft_strlen(s))
		len = ft_strlen(s) - start;
	ptr = (char *)malloc(len + 1);
	if (!ptr)
		return (NULL);
	i = 0;
	if (start < ft_strlen(s))
	{
		while (s[start] && i < len)
		ptr[i++] = s[start++];
	}
	ptr[i] = '\0';
	return (ptr);
}
