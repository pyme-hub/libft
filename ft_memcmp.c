/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkongim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 20:03:41 by kkongim           #+#    #+#             */
/*   Updated: 2022/02/21 20:29:36 by kkongim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
int
memcmp(const void *s1, const void *s2, size_t n);

DESCRIPTION
	The memcmp() function compares byte string s1 against byte string s2.
	Both strings are assumed to be n bytes long.

RETURN VALUES
	The memcmp() function returns zero if the two strings are identical,
	otherwise returns the difference between the first two differing bytes
	(treated as unsigned char values, so that `\200' is greater than `\0',
	for example).
	Zero-length strings are always identical.
	This behavior is not required by C and portable code should only
	depend on the sign of the returned value.
*/
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			count;
	unsigned char	*ss1;
	unsigned char	*ss2;

	count = 0;
	ss1 = (unsigned char *)s1;
	ss2 = (unsigned char *)s2;
	while (count < n)
	{
		if (ss1[count] != ss2[count])
			return (ss1[count] - ss2[count]);
		count++;
	}
	return (0);
}
// #include <strings.h>
// #include <stdlib.h>
// #include <stdio.h>

// int	main(void)
// {
// 	char		*strs1;
// 	char		*strs2;
// 	const void	*str1;
// 	const void	*str2;
// 	size_t		i;
// 	size_t		n;
// 	int			cmp;
// 	i = 0;
// 	n = 8;
// 	strs1 = malloc(sizeof(char) * (n + 1));
// 	strs2 = malloc(sizeof(char) * (n + 1));
// 	while(i < n)
// 	{
// 		strs1[i] = 'a' + i;
// 		i++;
// 	}
// 	strs1[i] = '\0';
// 	i = 0;
// 	while(i < (n - 4))
// 	{
// 		strs2[i] = 'a' + i;
// 		i++;
// 	}
// 	while(i < n)
// 	{
// 		strs2[i] = 'k' + i;
// 		i++;
// 	}
// 	strs2[i] = '\0';
// 	str1 = strs1;
// 	str2 = strs2;
// 	cmp = ft_memcmp(str1, str2, n);
// 	printf("str1: %s\n", (char *)str1);
// 	printf("str2: %s\n", (char *)str2);
// 	printf("comparing: %d\n", cmp);
// }
