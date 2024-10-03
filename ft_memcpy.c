/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omadali <adalomer60@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 14:28:20 by omadali           #+#    #+#             */
/*   Updated: 2024/10/03 23:07:50 by omadali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	a;
	char	*e;
	char	*d;

	if (!dest && !src)
		return (0);
	e = (char *)dest;
	d = (char *)src;
	a = 0;
	while (a < n)
	{
		e[a] = d[a];
		a++;
	}
	return (dest);
}
