/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omadali <adalomer60@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 01:37:49 by omadali           #+#    #+#             */
/*   Updated: 2024/10/03 12:10:16 by omadali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strlcat(char *dst, const char *src, int size)
{
    int a;
    int b;
    int d;
    a = ft_strlen(dst);
    b = ft_strlen((char *)src);
    d = a + b;
	if(size == 0)
	d = b;
    b = 0;
	if ( size < 0)
	size = 2147483647;
    while(a < size - 1 && src[b] != '\0')
    {
        dst[a]= src[b];
        a++;
        b++;    
    }
    dst[a] = '\0';
    return(d);
}
