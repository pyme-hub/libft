/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkongim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 20:03:33 by kkongim           #+#    #+#             */
/*   Updated: 2022/03/09 22:50:17 by kkongim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	void	*retptr;

	while (n--)
	{
		if (*(unsigned char *)s == (unsigned char)c)
		{
			retptr = (unsigned char *)s;
			return (retptr);
		}
		s++;
	}
	return (NULL);
}
