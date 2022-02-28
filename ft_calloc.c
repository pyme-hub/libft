/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkongim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 20:02:31 by kkongim           #+#    #+#             */
/*   Updated: 2022/02/21 20:02:34 by kkongim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
void *
calloc(size_t count, size_t size);

DESCRIPTION
	The calloc() function contiguously allocates enough space for count objects
	that are size bytes of memory each and returns a pointer to the allocated
	memory.
	The allocated memory is filled with bytes of value zero.

RETURN VALUES
	If successful, calloc() functions return a pointer to allocated memory.
	If there is an error, they return a NULL pointer and set errno to ENOMEM.
*/
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*arr;

	arr = malloc(count * size);
	if (arr == NULL)
		return (NULL);
	ft_bzero(arr, count * size);
	return (arr);
}
