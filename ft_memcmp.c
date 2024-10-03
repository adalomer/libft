/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omadali <adalomer60@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 20:07:39 by omadali           #+#    #+#             */
/*   Updated: 2024/10/01 21:53:48 by omadali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
int ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t a;
	unsigned char *f;
	unsigned char *e;
	
	if (!s1 || !s2)
		return (0);
	f = (unsigned char *)s1;
	e = (unsigned char *)s2;
	a = 0;
	while(a < n)
	{
		if(f[a] - e[a] != 0)
			return (f[a]-e[a]);
		a++;
	}
	return (0);
   }
   