/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkongim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 20:03:20 by kkongim           #+#    #+#             */
/*   Updated: 2022/02/21 20:03:26 by kkongim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Parameters
	n: the integer to convert.

Return value
	The string representing the integer.
	NULL if the allocation fails.
External functs.
	malloc

Description
	Allocates (with malloc(3)) and returns a string representing
	the integer received as an argument.
	Negative numbers must be handled.
*/

#include "libft.h"

char	*ft_itoa(int n);
