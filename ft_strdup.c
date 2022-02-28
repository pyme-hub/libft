/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkongim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 20:06:17 by kkongim           #+#    #+#             */
/*   Updated: 2022/02/21 20:06:19 by kkongim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
char *
strdup(const char *s1);

DESCRIPTION
	The strdup() function allocates sufficient memory for a copy of the
	string s1,
	does the copy, and returns a pointer to it.
	The pointer may subsequently be used as an argument to the function
	free(3).

	If insufficient memory is available, NULL is returned and errno is set
	to ENOMEM.
*/
#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		i;
	char	*pdst;

	pdst = (char *)malloc(ft_strlen((char *)s1) + 1);
	if (!pdst)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		pdst[i] = s1[i];
		i++;
	}
	pdst[i] = '\0';
	return (pdst);
}

// int	main(void)
// {
// 	const char	*str = "vamos la ver se isto da";
// 	char		*ptr;
// 	ptr = ft_strdup(str);
// 	printf("str : %s\n", (char *)str);
// 	printf("ptr : %s\n", (char *)ptr);
// }
