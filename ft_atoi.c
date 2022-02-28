/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkongim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 20:01:57 by kkongim           #+#    #+#             */
/*   Updated: 2022/02/21 20:02:01 by kkongim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
int
atoi(const char *str);

DESCRIPTION
	The atoi() function converts the initial portion of the string
	pointed to by str to int representation.

	It is equivalent to:
		(int)strtol(str, (char **)NULL, 10);
*/
#include "libft.h"
// #include "ft_isdigit.c"

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
	int	ret;
	int	sign;

	ret = 0;
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
		ret = (ret * 10) + *str - '0';
		str++;
	}
	return (ret * sign);
}

// #include <stdio.h>

// int	main(void)
// {
// 	int	i;
// 	i = ft_atoi("2147483649");
// 	printf("%d", i);
// }
