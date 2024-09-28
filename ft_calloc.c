/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omadali <adalomer60@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 18:06:21 by omadali           #+#    #+#             */
/*   Updated: 2024/09/27 13:50:43 by omadali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_calloc(int b, int size)
{
	int		a;
	char	*p;

	a = 0;
	p = malloc(b * size);
	while ((b * size) > a)
	{
		p[a] = 0;
		a++;
	}
	return ((void *)p);
}