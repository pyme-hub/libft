/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkongim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 20:04:12 by kkongim           #+#    #+#             */
/*   Updated: 2022/02/21 20:34:35 by kkongim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
void *
memset(void *b, int c, size_t len);

DESCRIPTION
	The memset() function writes len bytes of value c
	(converted to an unsigned char) to the string b.

RETURN VALUES
	The memset() function returns its first argument.
*/
#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	count;

	count = 0;
	while (count < len)
	{
		((unsigned char *)b)[count] = c;
		count++;
	}
	return (b);
}

// #include <stdio.h>
// #include <string.h>

// int main () {
//    char str[50];

//    strcpy(str,"This is string.h library function");
//    puts(str);

//    ft_memset(str,'$',7);
//    puts(str);

//    return(0);
// }
