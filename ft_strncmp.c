/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omadali <adalomer60@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 19:27:08 by omadali           #+#    #+#             */
/*   Updated: 2024/10/02 14:13:40 by omadali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
   int ft_strncmp(const char *s1, const char *s2, int n)
   {
	int a;
	a = 0;
	if ( n <  0)
	return(-1);
	if (!s1 || !s2)
		return (0);
	while((s1[a] != '\0' || s2[a] != '\0') && a < n)
	{
		if(s1[a] - s2[a] != 0)
			return (s1[a]-s2[a]);
		a++;
	}
	return (0);
   }