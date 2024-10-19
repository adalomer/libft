/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omadali <adalomer60@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 14:13:12 by omadali           #+#    #+#             */
/*   Updated: 2024/10/03 21:15:07 by omadali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static int	count_word(long int a, int *result)
{
	int	b;

	b = 0;
	if (a < 0)
	{
		a = a * -1;
		b++;
		*result = 1;
	}
	if (a == 0)
		b++;
	while (a > 0)
	{
		a = a / 10;
		b++;
	}
	return (b);
}

char	*ft_itoa(int n)
{
	long int	a;
	int			b;
	char		*c;
	int			result;

	result = 0;
	a = n;
	b = count_word(a, &result);
	c = (char *)malloc(sizeof(char) * (b + 1));
	if (!c)
		return (NULL);
	if (result == 1)
	{
		c[0] = '-';
		a *= -1;
	}
	c[b--] = 0;
	while (a > 0)
	{
		c[b--] = 48 + (a % 10);
		a /= 10;
	}
	if (n == 0)
		c[0] = 48;
	return (c);
}
