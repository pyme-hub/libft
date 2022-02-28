/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkongim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 20:05:41 by kkongim           #+#    #+#             */
/*   Updated: 2022/02/21 20:06:10 by kkongim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
char *
strchr(const char *s, int c);

DESCRIPTION
	The strchr() function locates the first occurrence of c (converted to a char)
	in the string pointed to by s.
	The terminating null character is considered to be part of the string;
	therefore if c is `\0', the	functions locate the terminating `\0'.

RETURN VALUES
	The function strchr() returns a pointer to the located character,
	or NULL if the character does not appear in the string.
*/
#include "libft.h"
// #include "ft_memchr.c"
// #include "ft_strlen.c"
char	*ft_strchr(const char *s, int c)

{
	int	i;

	i = 0;
	while (*(s + i) != '\0')
	{
		if (*((char *)s + i) == (unsigned char)c)
		{
			return ((char *)(s + i));
		}
		i++;
	}
	if (*(s + i) == c)
		return ((char *)(s + i));
	return (0);
}
// {
// 	return (ft_memchr(s, c, ft_strlen(s) + 1));
// }
// #include <stdio.h>
// #include <string.h>

// int main(void)
// {
//     const char  *str =  "vamos la ver se isto da algume coise";
//     char        *ptr;
//     int         i;
// 	i = 0;
//     //ptr = ft_strchr(str, 97); // 'a' = 97
// 	ptr = ft_strchr(str, 97);
//     while (ptr[i] != '\0')
//     {
//         printf("%c", ptr[i]);
// 		i++;
//     }
// 	printf("\n");
// }
