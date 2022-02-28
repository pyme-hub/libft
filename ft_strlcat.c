/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkongim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 20:06:50 by kkongim           #+#    #+#             */
/*   Updated: 2022/02/21 20:06:57 by kkongim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
size_t
strlcat(char * restrict dst, const char * restrict src, size_t dstsize);

DESCRIPTION
	strlcat() takes the full size of the destination buffer
	and guarantee NUL-termination if there is room.
	Note that room for the NUL should be included in dstsize.

	strlcat() appends string src to the end of dst.
	It will append at most dstsize - strlen(dst) - 1 characters.
	It will then NUL-terminate, unless dstsize is 0
	or the original dst string was longer than dstsize
	(in practice this should not happen as it means that either
	dstsize is incorrect or that dst is not a proper string).

	If the src and dst strings overlap, the behavior is undefined.

RETURN VALUES
	strlcat() returns the total length of the string they tried to create.
	That means the initial length of dst plus the length of src.

	If the return value is >= dstsize, the output string has been truncated.
	It is the caller's responsibility to handle this.
*/
#include "libft.h"
// #include "ft_strlen.c"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	ret;
	size_t	d_len;
	size_t	src_index;

	d_len = ft_strlen(dst);
	ret = d_len + ft_strlen(src);
	src_index = 0;
	if (d_len + 1 > dstsize)
		return (ret - d_len + dstsize);
	while (src[src_index] != '\0' && d_len + 1 < dstsize)
	{
		dst[d_len] = src[src_index];
		d_len++;
		src_index++;
	}
	dst[d_len] = '\0';
	return (ret);
}
// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     char first[] = "rrrrrr";
//     char last[] = "a";
//     int r;
//     int size = 50;
//     char buffer[size];

//     strcpy(buffer,first);
//     r = ft_strlcat(buffer,last,size);

//     puts(buffer);
//     printf("Value returned: %d\n",r);
//     if( r > size )
//         puts("String truncated");
//     else
//         puts("String was fully copied");

//     return(0);
// }
