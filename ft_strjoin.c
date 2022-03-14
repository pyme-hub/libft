/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkongim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 20:06:39 by kkongim           #+#    #+#             */
/*   Updated: 2022/03/12 00:12:20 by kkongim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*j_str;
	size_t	s1_len;
	size_t	s2_len;

	if (!s1 || !s2)
		return (NULL);
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	j_str = (char *)malloc(sizeof(char) * (s1_len + s2_len + 1));
	if (!j_str)
		return (NULL);
	if (s1)
		ft_strlcpy(j_str, s1, s1_len + 1);
	if (s2)
		ft_strlcat(j_str, s2, s1_len + s2_len + 1);
	return (j_str);
}
