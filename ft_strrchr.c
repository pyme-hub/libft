/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkongim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 20:08:03 by kkongim           #+#    #+#             */
/*   Updated: 2022/02/21 20:08:05 by kkongim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
char *
strrchr(const char *s, int c);

DESCRIPTION
	The strrchr() function is identical to strchr(),
	except it locates the last occurrence of c.

RETURN VALUES
	The functions strchr() and strrchr() return a pointer to the
	located character, or NULL if the character does not appear in the string.
*/
#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	size_t	i;

	i = ft_strlen(str);
	if ((char)c == '\0')
		return ((char *)str + i);
	while (i--)
	{
		if (str[i] == (char)c)
			return ((char *)(str + i));
	}
	return (0);
}
// char	*ft_strrchr(const char *s, int c)
// {
// 	int	count;

// 	count = 0;
// 	while (s[count])
// 		count++;
// 	while (count >= 0)
// 	{
// 		if (s[count] == (char)c)
// 			return ((char *)(s + count));
// 		count--;
// 	}
// 	return (NULL);
// }
// find the the last c that occur in para.
// #include <stdio.h>
// #include <string.h>
// int main(void)
// {
//     const char  *str =  "vamos la ver se isto da algume coise";
//     char        *ptr;
//     int         i;
// 	i = 0;
//     //ptr = ft_strrchr(str, 97); // 'a' = 97
// 	ptr = ft_strrchr(str, 97);
//     while (ptr[i] != '\0')
//     {
//         printf("%c", ptr[i]);
// 		i++;
//     }
// 	printf("\n");
// }
// #include <stdio.h>
// #include <string.h>
// int main(void)
// {
// 	printf("0:%s\n", strrchr("helleo", 'r'));
// 	printf("0:%s\n", ft_strrchr("helleo", 'r'));
// }
