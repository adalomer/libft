/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omadali <adalomer60@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 19:07:33 by omadali           #+#    #+#             */
/*   Updated: 2024/10/02 13:40:44 by omadali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strchr(const char *a, int c)
{
    if(!a)
    return (0);
    c = c%256;
    if(c < 0)
    c = c+256;
    while(*a)
    {
        if (*a == c)
        return((char *)a);
        a++;
    }
    if(c == 0)
    return ((char *)a);
    return(0);
}