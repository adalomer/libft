/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omadali <omadali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 14:28:20 by omadali           #+#    #+#             */
/*   Updated: 2024/10/11 04:16:48 by omadali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	unsigned char	*e;
	unsigned char	*d;
	size_t			a;

	if (!dst && !src)
		return (0);
	e = (unsigned char *)dst;
	d = (unsigned char *)src;
	a = 0;
	while (a < n)
	{
		e[a] = d[a];
		a++;
	}
	return (dst);
}
