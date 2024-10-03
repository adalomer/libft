/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omadali <adalomer60@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 02:08:15 by omadali           #+#    #+#             */
/*   Updated: 2024/09/30 23:47:51 by omadali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char *ft_strdup(const char *s)
{
	int b;
	char *a;
	b = 0;
	if ( !s )
	return(0);
	while(s[b] != '\0')
	b++;
	a = (char *)malloc(b*sizeof(char)+ 1);
	b = 0;
	while(s[b] != '\0')
	{
		a[b] = s[b];
		b++;
	}
	a[b] = '\0';
	return(a);
}