/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omadali <adalomer60@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 01:37:49 by omadali           #+#    #+#             */
/*   Updated: 2024/09/29 01:59:36 by omadali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strlcat(char *dst, const char *src, int size)
{
    int a;
    int b;
    int d;
    d = 0;
    a = 0;
    b = 0;
    while(dst[a] != '\0')
    a++;
    while(src[b] != '\0')
    b++;
    d = a + b;
    b = 0;
    while(a < size && src[b] != '\0')
    {
        dst[a]= src[b];
        a++;
        b++;    
    }
    dst[a] = '\0';
    return(d);
}
