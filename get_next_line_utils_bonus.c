/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msariasl <msariasl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 15:30:40 by msariasl          #+#    #+#             */
/*   Updated: 2022/12/09 15:39:42 by msariasl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

size_t	ft_strlen(const char *s)
{
	size_t	size;

	size = 0;
	while (*s != 0)
	{
		size++;
		s++;
	}
	return (size);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new;
	size_t	len;

	len = ft_strlen(s1) + ft_strlen(s2);
	new = (char *) malloc(sizeof(char) * len + 1);
	if (!new)
		return (NULL);
	while (*s1 != 0)
	{
		*new = *s1;
		new++;
		s1++;
	}
	while (*s2 != 0)
	{
		*new = *s2;
		new++;
		s2++;
	}
	*new = 0;
	return (new - len);
}

char	*ft_strchr(const char *s, int c)
{
	while (*s != (char)c)
		if (!*s++)
			return (0);
	return ((char *)s);
}
