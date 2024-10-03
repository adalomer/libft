/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omadali <adalomer60@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 14:15:19 by omadali           #+#    #+#             */
/*   Updated: 2024/10/03 23:58:25 by omadali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		a;
	char	*d;

	if (!s)
		return (0);
	a = ft_strlen(s);
	d = (char *)malloc(sizeof(char) * (a + 1));
	if (!d)
		return (0);
	a = 0;
	while (s[a] != '\0')
	{
		d[a] = f(a, s[a]);
		a++;
	}
	d[a] = '\0';
	return (d);
}
