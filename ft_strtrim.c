/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkongim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 20:08:14 by kkongim           #+#    #+#             */
/*   Updated: 2022/02/21 20:38:34 by kkongim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Parameters
	s1: The string to be trimmed.
	set: The reference set of characters to trim.

Return value
	The trimmed string.
	NULL if the allocation fails.

External functs
	malloc

Description
	Allocates (with malloc(3)) and returns a copy of ’s1’ with the characters
	specified in ’set’ removed from the beginning and the end of the string.
*/
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set);
