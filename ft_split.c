/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omadali <adalomer60@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 13:11:07 by omadali           #+#    #+#             */
/*   Updated: 2024/09/29 14:23:14 by omadali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"
int second (char const a,char b)
{
	int a;
	int d;
	d = 0;
	a = 0;
	while(s[a] != '\0')
	{
		if(s[a+1] == b)
		{
		a++;
		d++;
		}
		while(s[a+1 != b])
		a++;
	}
	return(d);
}
char first( char const *s, char c,int d)
{
int a;
char *b;
a = 0;
while(s[])
b = (char *)malloc(sizeof(char)*d+1);
while(s[d] != c)
{
	b[a] = s[d];
	a++;
	d++; 
}
b[a] = '\0';
return(b);

}
char **ft_split(char const *s, char c)
{
	int a;
	int d;
	int g;
	char *b;
	char **f;
	a = 0;
	g = 0;
	d = ft_strlen(s);
	if(!*s || !c)
	return(0);
	while(s[a] != '\0')
	{
		**f = (char *)malloc(second(s,c)*sizeof(char));
		if(s[a] == c)
		{
			*f[g] =first(s,c,a);
			g++;
		}
		a++;
	}
	return(f);
}