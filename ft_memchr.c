/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omadali <adalomer60@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 19:44:16 by omadali           #+#    #+#             */
/*   Updated: 2024/09/27 20:05:42 by omadali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void *ft_memchr(const void *s, int c, int n)
{
	int a;
	char *d;
	d = (char *)s;
	a = 0;
	if (d == 0)
	return(0);
	while(d[a] != '\0' && a < n)
	{
		if(d[a] == c)
		return((&d[a]));
		a++;
	}
	return(0);
}
#include <stdio.h>
