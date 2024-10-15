/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omadali <omadali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 16:24:31 by omadali           #+#    #+#             */
/*   Updated: 2024/10/11 16:25:26 by omadali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			a;
	unsigned char	*d;

	d = (unsigned char *)s;
	a = 0;
	c = (unsigned char)c;
	while (a < n)
	{
		if (d[a] == c)
			return ((void *)&d[a]);
		a++;
	}
	return (0);
}
