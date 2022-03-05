/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkongim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 20:03:20 by kkongim           #+#    #+#             */
/*   Updated: 2022/03/05 17:51:43 by kkongim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_getlen(long num)
{
	int	c;

	c = 0;
	if (num < 0)
	{
		num *= -1;
		c++;
	}
	while (1)
	{
		num /= 10;
		c++;
		if (num == 0)
			return (c);
	}
}

char	*ft_itoa(int n)
{
	char	*str;
	int		isneg;
	size_t	len;
	long	num;

	num = n;
	isneg = (n < 0);
	len = ft_getlen(num);
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len--] = '\0';
	if (isneg)
	{
		str[0] = '-';
		num *= -1;
	}
	if (num == 0)
		str[0] = '0';
	while (num > 0)
	{
		str[len--] = num % 10 + '0';
		num /= 10;
	}
	return (str);
}
