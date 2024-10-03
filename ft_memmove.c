/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omadali <adalomer60@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 14:34:02 by omadali           #+#    #+#             */
/*   Updated: 2024/09/30 23:47:54 by omadali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dest, const void *src, int n)
{
	if (!dest || !src)
		return (0);
	char *d;
	char *s;
	s = (char *)src;
	d = (char *)dest;
	if (d - s > 0 )
	{
		d += n - 1;
		s += n - 1;
		while(n > 0)
		{
			*d-- = *s--;
			n--;
		}
	}
	else 
	{
		while(0 < n)
		{
		*d++ = *s++;
		n--;
		}
	}
	return(dest);

}