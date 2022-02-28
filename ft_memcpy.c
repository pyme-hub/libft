/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkongim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 20:03:49 by kkongim           #+#    #+#             */
/*   Updated: 2022/02/21 20:30:35 by kkongim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
void *
memcpy(void *restrict dst, const void *restrict src, size_t n);

DESCRIPTION
	The memcpy() function copies n bytes from memory area src to memory area dst.
	If dst and src overlap, behavior is undefined.
	Applications in which dst and src might overlap should use memmove(3) instead.

RETURN VALUES
	The memcpy() function returns the original value of dst.
*/
#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	count;

	if (dst == NULL && src == NULL)
		return (NULL);
	count = 0;
	while (count < n)
	{
		((unsigned char *)dst)[count] = ((unsigned char *)src)[count];
		count++;
	}
	return (dst);
}
// #include <strings.h>
// #include <stdlib.h>
// #include <stdio.h>
// int main(void)
// {
//     char str[] = "0123456789";
//     char str1[] = "abcdef";
//     memcpy(str, str1, 3);
//     printf("0:%s\n", str);
//     char str0[] = "0123456789";
//     char str11[] = "abcdef";
//     ft_memcpy(str0, str11, 3);
//     printf("0:%s\n", str0);
//     char str2[] = "01234\0 56789";
//     char str3[] = "abcdef";
//     memcpy(str2, str3, 7);
//     printf("1:%s\n", str2);
//     char str22[] = "01234\0 56789";
//     char str33[] = "abcdef";
//     ft_memcpy(str22, str33, 7);
//     printf("1:%s\n", str22);

// 	char str4[] = "0123456789";
//     char str5[] = "abc\0def";
//     memcpy(str4, str5, 7);
//     printf("2:%s\n", str4);
//     char str44[] = "0123456789";
//     char str55[] = "abc\0def";s
//     ft_memcpy(str44, str55, 7);
//     printf("2:%s\n", str44);

// }
