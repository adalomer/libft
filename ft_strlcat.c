/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omadali <adalomer60@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 01:37:49 by omadali           #+#    #+#             */
/*   Updated: 2024/10/03 23:37:35 by omadali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t a;
    size_t b;
    size_t d;

    a = ft_strlen(dst);
    b = ft_strlen((char *)src);
    d = a + b;
    if (size == 0)
        return (b);
    if (size <= a)
        return (b + size);
    b = 0;
    while (a < size - 1 && src[b] != '\0')
    {
        dst[a] = src[b];
        a++;
        b++;
    }
    dst[a] = '\0';
    return (d);
}

