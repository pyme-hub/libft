/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkongim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 20:02:21 by kkongim           #+#    #+#             */
/*   Updated: 2022/02/21 20:02:25 by kkongim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
void
bzero(void *s, size_t n);

DESCRIPTION
	The bzero() function writes n zeroed bytes to the string s.
	If n is zero, bzero() does nothing.
*/
#include "libft.h"
// #include "ft_memset.c"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
// #include <strings.h>
// #include <stdio.h>
// #include <stdlib.h>
// int	main(void)
// {
// 	char	*strs;
// 	void	*ptr;
// 	size_t	i;
// 	size_t	n;
// 	i = 0;
// 	n = 8;
// 	strs = malloc(sizeof(char) * (n + 1));
// 	while(i < n)
// 	{
// 		strs[i] = 'a';
// 		i++;
// 	}
// 	strs[i] = '\0';
// 	printf("before bzero: %s\n", strs);
// 	ptr = strs;
// 	ft_bzero(ptr, 1);
// 	printf("after bzero: %s\n", strs);
// }
