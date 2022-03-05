/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkongim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 20:06:50 by kkongim           #+#    #+#             */
/*   Updated: 2022/03/05 17:52:37 by kkongim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	res;
	size_t	d_len;
	size_t	src_index;

	d_len = ft_strlen(dst);
	res = d_len + ft_strlen(src);
	src_index = 0;
	if (d_len + 1 > dstsize)
		return (res - d_len + dstsize);
	while (src[src_index] != '\0' && d_len + 1 < dstsize)
	{
		dst[d_len] = src[src_index];
		d_len++;
		src_index++;
	}
	dst[d_len] = '\0';
	return (res);
}
