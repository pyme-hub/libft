/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkongim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 20:07:20 by kkongim           #+#    #+#             */
/*   Updated: 2022/02/21 20:07:22 by kkongim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
size_t
strlen(const char *s);

DESCRIPTION
	The strlen() function computes the length of the string s.

RETURN VALUES
	The strlen() function returns the number of characters that precede the
	terminating NUL character.
*/
#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	count;

	count = 0;
	while (s[count] != '\0')
		count++;
	return (count);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char *str = "hello";
	printf("0:%lu\n", strlen(str));
	printf("0:%zu\n", ft_strlen(str));

	str = "";
	printf("1:%lu\n", strlen(str));
	printf("1:%zu\n", ft_strlen(str));
	str = "123\0 4";
    printf("2:%lu\n", strlen(str));
    printf("2:%zu\n", ft_strlen(str));
}*/
