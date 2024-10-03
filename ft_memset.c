/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omadali <adalomer60@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 14:22:09 by omadali           #+#    #+#             */
/*   Updated: 2024/10/04 02:02:24 by omadali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	a;
	char	*b;

	if (!s)
		return (0);
	b = (char *)s;
	a = 0;
	while (a < n)
	{
		b[a] = (char)c;
		a++;
	}
	return (s);
}
