/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkongim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 20:07:46 by kkongim           #+#    #+#             */
/*   Updated: 2022/02/21 20:36:20 by kkongim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
char *
strnstr(const char *haystack, const char *needle, size_t len);

DESCRIPTION
	The strnstr() function locates the first occurrence of the null-terminated
	string needle in the stringhaystack, where not more than
	len characters are searched.
	Characters that appear after a `\0' character are not searched.
	Since the strnstr() function is a FreeBSD specific API, it should only be
	used when portability is not a concern.

RETURN VALUES
	If needle is an empty string, haystack is returned;
	if needle occurs nowhere in haystack, NULL is returned;
	otherwise a pointer to the first character of the
	first occurrence of needle is returned.
*/
#include "libft.h"

// char	*ft_strnstr(const char	*str, const char *to_find, size_t len)
// {
// 	size_t		i;
// 	size_t		j;

// 	i = 0;
// 	j = 0;
// 	if (to_find[j] == '\0')
// 		return ((char *)str);
// 	while (*str != '\0' && i < len)
// 	{
// 		while (str[j] == to_find[j] && (i + j) < len)
// 		{
// 			if (to_find[j + 1] == '\0')
// 			{
// 				return ((char *)str);
// 			}
// 			j++;
// 		}
// 		i++;
// 		str++;
// 		j = 0;
// 	}
// 	return (0);
// }
// #include "ft_strlen.c"
// #include "ft_strncmp.c"
char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;

	if (!*needle)
		return ((char *)haystack);
	if (ft_strlen(needle) > len || !*haystack)
		return (NULL);
	i = 0;
	while (i < len)
	{
		if (len - i < ft_strlen(needle))
			return (NULL);
		if (!ft_strncmp((haystack + i), needle, ft_strlen(needle)))
			return ((char *)(haystack + i));
		i++;
	}
	return (NULL);
}
// #include <string.h>
// #include <stdlib.h>
// #include <stdio.h>

// int	main(void)
// {
// 	printf("our  %s\n",ft_strnstr("for test strnstr", " te", 6));
// 	printf("our  %s\n",ft_strnstr("fo", "", 6));
// 	printf("our  %s\n",ft_strnstr("for test strnstr", " te", 2));
// 	printf("our  %s\n",ft_strnstr("for test strnstr", "home", 10));
// 	printf("our  %s\n",ft_strnstr("for test strnstrs", "trs", 20));
// 	printf("our  %s\n",ft_strnstr("for test strnstr", "t s", 10));
// 	printf("our  %s\n",ft_strnstr("for tesa test rn", "test", 20));
// 	return (0);
// }
