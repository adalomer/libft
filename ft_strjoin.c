/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omadali <adalomer60@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 21:01:45 by omadali           #+#    #+#             */
/*   Updated: 2024/10/04 01:42:46 by omadali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		a;
	int		b;
	char	*c;
	int		d;

	if (!s1 || !s2)
		return (NULL);
	a = ft_strlen(s1);
	b = ft_strlen(s2);
	c = (char *)malloc(sizeof(char) * (a + b + 1));
	if (!c)
		return (NULL);
	d = 0;
	while (d < a)
	{
		c[d] = s1[d];
		d++;
	}
	while (d < a + b)
	{
		c[d] = s2[d - a];
		d++;
	}
	c[d] = '\0';
	return (c);
}
