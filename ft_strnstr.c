/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omadali <adalomer60@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 20:18:40 by omadali           #+#    #+#             */
/*   Updated: 2024/10/04 01:59:13 by omadali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	size_t	a;
	size_t	b;

	if (*s2 == '\0')
		return ((char *)s1);
	a = 0;
	while (a < len && s1[a] != '\0')
	{
		b = 0;
		while (a + b < len && s1[a + b] == s2[b])
		{
			if (s2[b + 1] == '\0')
				return ((char *)(s1 + a));
			b++;
		}
		a++;
	}
	return (NULL);
}
