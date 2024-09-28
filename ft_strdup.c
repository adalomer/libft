/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omadali <adalomer60@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 02:08:15 by omadali           #+#    #+#             */
/*   Updated: 2024/09/28 12:03:30 by omadali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
char *ft_strdup(const char *s)
{
	int b;
	char *a;
	b = 0;
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