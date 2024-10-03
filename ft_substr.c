/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omadali <adalomer60@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 01:45:39 by omadali           #+#    #+#             */
/*   Updated: 2024/10/04 01:45:54 by omadali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"
#include <stddef.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*a;
	size_t	b;
	size_t	c;

	if (!s)
		return (NULL);
	b = ft_strlen(s);
	if (start >= b)
		len = 0;
	else if (b < len + start)
		len = b - start;
	a = (char *)malloc((sizeof(char) * len) + 1);
	if (a == NULL)
		return (NULL);
	c = 0;
	while (c < len && s[start + c])
	{
		a[c] = s[start + c];
		c++;
	}
	a[c] = '\0';
	return (a);
}
