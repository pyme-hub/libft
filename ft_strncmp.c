/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkongim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 20:07:37 by kkongim           #+#    #+#             */
/*   Updated: 2022/02/21 20:35:22 by kkongim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
int
strncmp(const char *s1, const char *s2, size_t n);

DESCRIPTION
	strncmp() lexicographically compares the null-terminated strings s1 and s2.

	It compares not more than n characters.
	Because strncmp() is designed for comparing strings rather than binary data,
	characters that appear after a `\0' character are not compared.

RETURN VALUES
	strncmp() functions returns an integer greater than,
	equal to, or less than 0,
	according as the string s1 is greater than, equal to,
	or less than the string s2.
	The comparison is done using unsigned characters,
	so that `\200' is greater than `\0'.
*/
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	c;

	c = 0;
	while (c < n && (s1[c] || s2[c]))
	{
		if (s1[c] != s2[c])
			return ((unsigned char)s1[c] - (unsigned char)s2[c]);
		c++;
	}
	return (0);
}
// #include <stdio.h>

// int	main(void)
// {
// 	printf("ans : 0 , result : %d\n",ft_strncmp("test", "test", 5));
// 	printf("ans : 1 , result : %d\n",ft_strncmp("ut", "test", 2));
// 	printf("ans : 0 , result : %d\n",ft_strncmp("te", "test", 2));
// 	printf("ans : -1 , result : %d\n",ft_strncmp("test", "testh", 5));
// 	printf("ans : 1 , result : %d\n",ft_strncmp("abcefg", "abcdef", 5));
// 	return (0);
// }
