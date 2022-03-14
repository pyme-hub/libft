/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkongim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 10:02:37 by kkongim           #+#    #+#             */
/*   Updated: 2022/03/14 10:02:39 by kkongim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	size_t	lenr;
	size_t	i;

	if (!s)
		return (NULL);
	lenr = len;
	if (start >= ft_strlen(s))
	{
		ptr = (char *) malloc(sizeof(char));
		ptr[0] = '\0';
		return (ptr);
	}
	if (ft_strlen(s) <= len)
		lenr = ft_strlen(s) - start;
	ptr = (char *)malloc(lenr + 1);
	if (!ptr)
		return (NULL);
	i = 0;
	while (s[start] && i < lenr)
		ptr[i++] = s[start++];
	ptr[i] = '\0';
	return (ptr);
}
