/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omadali <adalomer60@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 19:44:16 by omadali           #+#    #+#             */
/*   Updated: 2024/10/04 02:22:16 by omadali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			a;
	unsigned char	*d;

	d = (unsigned char *)s;
	a = 0;
	c = c % 256;
	while (a < n)
	{
		if (d[a] == (unsigned char)c)
			return ((void *)&d[a]);
		a++;
	}
	return (0);
}
