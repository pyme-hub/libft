/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkongim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 20:06:50 by kkongim           #+#    #+#             */
/*   Updated: 2022/03/12 20:42:29 by kkongim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	result;
	size_t	d_len;
	size_t	i;

	d_len = ft_strlen(dst);
	result = d_len + ft_strlen(src);
	if (d_len + 1 > dstsize)
		return (dstsize + ft_strlen(src));
	i = 0;
	while (src[i] != '\0' && d_len + 1 < dstsize)
	{
		dst[d_len] = src[i];
		d_len++;
		i++;
	}
	dst[d_len] = '\0';
	return (result);
}
