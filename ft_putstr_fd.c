/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkongim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 20:05:19 by kkongim           #+#    #+#             */
/*   Updated: 2022/02/21 20:05:22 by kkongim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Parameters
	s: The string to output.
	fd: The file descriptor on which to write.

Return value
	None

External functs.
	write

Description
	Outputs the string ’s’ to the given file descriptor.
*/

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	while (*s != '\0')
	{
		write(fd, s, 1);
		s++;
	}
}
// {
// 	int	i;

// 	i = 0;
// 	if (s)
// 		while (s[i] != '\0')
// 			write(fd, &s[i++], 1);
// }
