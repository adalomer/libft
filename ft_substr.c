/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omadali <adalomer60@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 21:35:10 by omadali           #+#    #+#             */
/*   Updated: 2024/10/03 15:29:30 by omadali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"
#include <stddef.h>

char *ft_substr(char const *s, unsigned int start,size_t len) 
{
    char *a;
    size_t b;
    size_t c;

    c = 0;
    b = ft_strlen((char *)s);
    if ( start >= b)
        len = 0;
    else if ( b  < len + start)
        len = b - start;
    a = (char *)malloc((sizeof(char)*len) + 1);
    if ( a == NULL)
    return (0);
    while(c < len && s[start + c])
    {
        a[c] = s[start+c];
        c++;
    }
    a[c] = '\0';
    return(a);
}
/*char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	a;
	size_t	b;
	char	*str;

	a = 0;
	b = ft_strlen((char *)s);
	if (start >= b)
		len = 0;
	else if (b < len + start)
		len = b - start;
	str = (char *)malloc((sizeof(char) * len) + 1);
	if (str == NULL)
		return (NULL);
	while (a < len && s[start + a])
	{
		str[a] = s[start + a];
		a++;
	}
	str[a] = '\0';
	return (str);
}*/