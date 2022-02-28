/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkongim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 20:05:29 by kkongim           #+#    #+#             */
/*   Updated: 2022/02/21 20:05:34 by kkongim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Parameters
	s:  The string to be split.
	c:  The delimiter character.

Return value
	The array of new strings resulting from the split.
	NULL if the allocation fails.

External functs.
	malloc, free

Description
	Allocates (with malloc(3)) and returns an array
	of strings obtained by splitting ’s’ using the
	character ’c’ as a delimiter.  The array must end
	with a NULL pointer.
*/
#include "libft.h"

char	**ft_split(char const *s, char c);
