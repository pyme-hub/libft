/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkongim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 20:06:26 by kkongim           #+#    #+#             */
/*   Updated: 2022/02/21 20:37:59 by kkongim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Parameters
	s: The string on which to iterate.
	f: The function to apply to each character.

Return value
	None

External functs.
	None

Description
	Applies the function ’f’ on each character of the string passed as argument,
	passing its index as first argument. Each character is passed by
	address to ’f’ to be modified if necessary
*/

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*));
