/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkongim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 20:03:41 by kkongim           #+#    #+#             */
/*   Updated: 2022/03/05 17:51:50 by kkongim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
