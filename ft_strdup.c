/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkongim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 20:06:17 by kkongim           #+#    #+#             */
/*   Updated: 2022/03/05 17:52:30 by kkongim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
