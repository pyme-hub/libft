/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkongim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 20:07:46 by kkongim           #+#    #+#             */
/*   Updated: 2022/03/11 18:09:07 by kkongim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	llittle;

	llittle = ft_strlen(little);
	if (llittle == 0)
		return ((char *)big);
	while (len && *big)
	{
		if (ft_strncmp(big, little, llittle) == 0)
			return ((char *)big);
		if (llittle >= len)
			break ;
		big++;
		len--;
	}
	return (0);
}
