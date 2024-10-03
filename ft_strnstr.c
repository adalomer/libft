/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omadali <adalomer60@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 20:18:40 by omadali           #+#    #+#             */
/*   Updated: 2024/09/30 23:47:45 by omadali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char * s1, const char * s2, int len)
{
	int a;
	int b;
	a = 0;
	if(s1 == 0 || s2 == 0)
	return(0);
	while(a < len && s1[a] != '\0')
	{
		b = 0;
		while(s1[a+b] == s2[b])
		{
			if(s2[b] == 0)
				return((char *)s1+a);
			b++;
		}
		a++;
	}
	return(0);
}