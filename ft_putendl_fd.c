/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkongim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 20:04:36 by kkongim           #+#    #+#             */
/*   Updated: 2022/02/21 20:05:01 by kkongim          ###   ########.fr       */
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
	Outputs the string ’s’ to the given file descriptor followed by a newline
*/

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	char	c;

	c = '\n';
	while (*s != '\0')
	{
		write(fd, s, 1);
		s++;
	}
	write(fd, &c, 1);
}
