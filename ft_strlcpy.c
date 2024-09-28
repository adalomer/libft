/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omadali <adalomer60@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 01:40:06 by omadali           #+#    #+#             */
/*   Updated: 2024/09/29 01:16:41 by omadali          ###   ########.fr       */
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
	while(src[b] != '\0' && b < size)
	{
		dst[b] = src[b];
		b++;
	}
	dst[b] = '\0';
	return(c);
}