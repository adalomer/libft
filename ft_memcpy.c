/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omadali <adalomer60@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 14:28:20 by omadali           #+#    #+#             */
/*   Updated: 2024/09/30 23:47:55 by omadali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memcpy(void *dest, const void *src, int n)
{
	if (!dest && !src)
		return (0);
	int a;
	a = 0;
	char *d;
	char *e;
	d = (char *)src;
	e = dest;
	while(a < n)
	{
		e[a] = d[a];
		a++; 
	}
	return(dest);
}