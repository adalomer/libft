/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omadali <adalomer60@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 14:34:02 by omadali           #+#    #+#             */
/*   Updated: 2024/09/27 14:37:13 by omadali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void *memmove(void *dest, const void *src, int n)
{
	int a;
	a = 0;
	char *d;
	char *e;
	char *f;
	d = src;
	e = dest;
	f = e;
	while(a < n)  
	{
		f[a] = d[a];
		a++; 
	}
	return(dest);

}