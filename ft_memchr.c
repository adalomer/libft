/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omadali <adalomer60@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 19:44:16 by omadali           #+#    #+#             */
/*   Updated: 2024/10/01 21:49:16 by omadali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
    size_t a;
    unsigned char *d;

    if (!s)
    return(0);
    d = (unsigned char *)s;
    a = 0;
    c = c % 256;
    while(a < n)
    {
        if(d[a] == c)
        return((&d[a]));
        a++;
    }
    return(0);
}

