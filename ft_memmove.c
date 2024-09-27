/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omadali <adalomer60@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 14:34:02 by omadali           #+#    #+#             */
/*   Updated: 2024/09/28 02:00:21 by omadali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void *ft_memmove(void *dest, const void *src, int n)
{
	if (!dest && !src)
		return (0);
	int a;
	char *d;
	char *e;
	a = 0;
	d = src;
	e = dest;
	while(a < n)  
	{
		e[a] = d[a];
		a++; 
	}
	dest = &e;

	return(dest);

}