/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkongim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 20:04:02 by kkongim           #+#    #+#             */
/*   Updated: 2022/02/21 20:33:53 by kkongim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
void *
memmove(void *dst, const void *src, size_t len);

DESCRIPTION
	The memmove() function copies len bytes from string src to string dst.
	The two strings may overlap; the copy is always done in a non-destructive
	manner.

RETURN VALUES
	The memmove() function returns the original value of dst.
*/

#include "libft.h"
// #include "ft_memcpy.c"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*d;
	char const	*s;

	d = dst;
	s = src;
	if (!dst && !src)
		return (NULL);
	if (d < s)
		return (ft_memcpy(dst, src, len));
	else
	{
		while (len--)
			d[len] = s[len];
	}
	return (dst);
}
// {
// 	char	*d;
// 	char	*s;

// 	d = (char *)dst;
// 	s = (char *)src;
// 	if (dst == src)
// 		return (dst);
// 	if (s < d)
// 	{
// 		while (len--)
// 			*(d + len) = *(s + len);
// 		return (dst);
// 	}
// 	while (len--)
// 		*d++ = *s++;
// 	return (dst);
// }
// #include <string.h>
// #include <stdio.h>

// int main(void)
// {
//     char str[] = "0123456789";
//     char str1[] = "abcdef";
//     memmove(str, str1, 3);
//     printf("0:%s\n", str);

//     char str0[] = "0123456789";
//     char str11[] = "abcdef";
//     ft_memmove(str0, str11, 3);
//     printf("0:%s\n", str0);
// 	printf("\n");
//     char str2[] = "01234\0 56789";
//     char str3[] = "abcdef";
//     memmove(str2, str3, 7);
//     printf("1:%s\n", str2);

//     char str22[] = "01234\0 56789";
//     char str33[] = "abcdef";
//     ft_memmove(str22, str33, 7);
//     printf("1:%s\n", str22);
// 	printf("\n");
//     char str4[] = "0123456789";
//     char str5[] = "abc\0def";
//     memmove(str4, str5, 7);
//     printf("2:%s\n", str4);

//     char str44[] = "0123456789";
//     char str55[] = "abc\0def";
//     ft_memmove(str44, str55, 7);
//     printf("2:%s\n", str44);
// 	printf("\n");
//     char s[] = "0123456789";
//     ft_memmove(s, s, 9);
//     printf("7:%s\n", s);
//     char s1[] = "0123456789";
//     ft_memmove(s1, s1, 9);
//     printf("7:%s\n", s1);
// }
