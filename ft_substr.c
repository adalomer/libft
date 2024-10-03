/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omadali <adalomer60@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 21:35:10 by omadali           #+#    #+#             */
/*   Updated: 2024/10/02 23:25:02 by omadali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"
#include <stddef.h>

char *ft_substr(char const *s, unsigned int start,size_t len) 
{
    char *a;
    unsigned int b;
    unsigned int c;

    c = 0;
    b = ft_strlen((char *)s);
    if ( b - start <= len)
        len = b - start;
    if ( start > b)
    {
        return(0);
    }
    a = (char *)malloc(sizeof(char)*len + 1);
    while(s[start] != '\0' && c < len )
    {
        a[c] = s[start];
        c++;
        start++;
    }
    a[c] = '\0';
    return(a);
}