/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omadali <adalomer60@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 14:28:20 by omadali           #+#    #+#             */
/*   Updated: 2024/09/27 14:33:19 by omadali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void *ft_memcpy(void *dest, const void *src, int n)
{
	int a;
	a = 0;
	char *d;
	char *e;
	d = src;
	e = dest;
	while(a < n)
	{
		e[a] = d[a];
		a++; 
	}
	return(dest);
}