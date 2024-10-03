/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omadali <adalomer60@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 01:52:14 by omadali           #+#    #+#             */
/*   Updated: 2024/10/04 01:52:42 by omadali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static int	first_index(char const *s1, char const *set)
{
	int	f;
	int	a;

	a = 0;
	f = 0;
	while (s1[a] != '\0')
	{
		f = 0;
		while (set[f] != '\0')
		{
			if (s1[a] == set[f])
				break ;
			f++;
		}
		if (set[f] == '\0')
			break ;
		a++;
	}
	return (a);
}

static int	last_index(char const *s1, char const *set)
{
	int	b;
	int	f;

	b = ft_strlen((char *)s1) - 1;
	f = 0;
	while (b >= 0)
	{
		f = 0;
		while (set[f] != '\0')
		{
			if (s1[b] == set[f])
				break ;
			f++;
		}
		if (set[f] == '\0')
			break ;
		b--;
	}
	return (b);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		a;
	char	*c;
	int		b;

	a = 0;
	if (!s1 || !set)
		return (0);
	a = first_index(s1, set);
	b = last_index(s1, set);
	if (b < a)
		b = a - 1;
	c = (char *)malloc(sizeof(char) * (b - a + 2));
	ft_strlcpy(c, s1 + a, b - a + 2);
	return (c);
}
