/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkongim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 20:01:57 by kkongim           #+#    #+#             */
/*   Updated: 2022/03/13 16:15:22 by kkongim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	is_sign(int c)
{
	if (c == '-' || c == '+')
		return (1);
	return (0);
}

int	is_space(int c)
{
	if (c < 33)
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	long int	result;
	long int	sign;

	result = 0;
	sign = 1;
	if (*str == 0 || *str == '\e')
		return (0);
	while (is_space(*str))
		str++;
	if (is_sign(*str))
	{
		if (*str == '-')
			sign = sign * -1;
		str++;
	}
	while (ft_isdigit(*str))
	{
		result = (result * 10) + (*str - '0');
		str++;
	}
	return (result * sign);
}
