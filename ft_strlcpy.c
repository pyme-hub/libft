/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkongim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 20:07:06 by kkongim           #+#    #+#             */
/*   Updated: 2022/02/21 20:07:08 by kkongim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
size_t
strlcpy(char * restrict dst, const char * restrict src, size_t dstsize);

DESCRIPTION
	strlcpy() takes the full size of the destination buffer and guarantees
	NUL-termination if there is room.
	Note that room for the NUL should be included in dstsize.

	strlcpy() copies up to dstsize - 1 characters from the string src to dst,
	NUL-terminating the result if dstsize is not 0.

	If the src and dst strings overlap, the behavior is undefined.

RETURN VALUES
	Like snprintf(3), strlcpy() returns the total length of the string
	they tried to create. For strlcpy() that means the length of src.

	If the return value is >= dstsize, the output string has been truncated.
	It is the caller's responsibility to handle this.
*/
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	if (!dstsize)
		return (ft_strlen(src));
	i = 0;
	while (src[i] && i < (dstsize - 1))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}
// size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
// {
// 	size_t	count;

// 	count = 0;
// 	if (dstsize > 0)
// 	{
// 		while (src[count] != '\0' && count < (dstsize - 1))
// 		{
// 			dst[count] = src[count];
// 			count++;
// 		}
// 		dst[count] = '\0';
// 	}
// 	while (src[count] != '\0')
// 		count++;
// 	return (count);
// }
