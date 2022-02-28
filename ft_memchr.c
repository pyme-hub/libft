/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkongim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 20:03:33 by kkongim           #+#    #+#             */
/*   Updated: 2022/02/21 20:03:35 by kkongim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
void *
memchr(const void *s, int c, size_t n);

DESCRIPTION
	The memchr() function locates the first occurrence of
	c (converted to an unsigned char) in string s.

RETURN VALUES
	The memchr() function returns a pointer to the byte located,
	or NULL if no such byte exists within n bytes.
*/
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	count;

	count = 0;
	while (count < n)
	{
		if (*((unsigned char *)s + count) == (unsigned char)c)
			return ((unsigned char *)(s + count));
		count++;
	}
	return (NULL);
}
// #include <strings.h>
// #include <stdlib.h>
// #include <stdio.h>

// int	main(void)
// {
// 	char		*strs;
// 	const void	*str;
// 	size_t		i;
// 	size_t		n;
// 	void		*ptr;
// 	i = 0;
// 	n = 26;
// 	strs = malloc(sizeof(char) * (n + 1));
// 	while(i < n)
// 	{
// 		strs[i] = 'a' + i;
// 		i++;
// 	}
// 	strs[i] = '\0';
// 	str = strs;
// 	ptr = ft_memchr(str, 115, n);
// 	printf("str1: %s\n", (char *)str);
// 	printf("ptr : %s\n", (char *)ptr);
// }
// THIS IS THE FIRST TIME WE SEE A CONSTANT VOID POINTER.
// The constant void pointer is the same as a void pointer, besides the fact
// that its instructed to point to a memory that should not be modified.
