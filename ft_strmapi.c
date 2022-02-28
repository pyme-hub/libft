/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkongim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 20:07:28 by kkongim           #+#    #+#             */
/*   Updated: 2022/02/21 20:07:30 by kkongim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Parameters
	s: The string on which to iterate.
	f: The function to apply to each character.

Return value
	The string created from the successive applications of ’f’.
	Returns NULL if the allocation fails.

External functs.
	malloc

Description
	Applies the function ’f’ to each character of the string ’s’,
	and passing its index as first argument to create a new string (with malloc(3))
	resultulting from successive applications of ’f
*/

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
