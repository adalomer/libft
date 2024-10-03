/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omadali <adalomer60@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 01:40:06 by omadali           #+#    #+#             */
/*   Updated: 2024/10/03 11:36:22 by omadali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strlcpy(char *dst, const char *src, int size)
{
	int b;
	int c;
	b = 0;
	c = 0;
	while(src[c] != '\0')
		c++;
	if ( size == 0)
	return(c);
	if ( size < 0)
	size = 2147483647;
	while(src[b] != '\0' && b < size - 1)
	{
		dst[b] = src[b];
		b++;
	}
	dst[b] = '\0';
	return(c);
}