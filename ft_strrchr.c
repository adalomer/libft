/* ************************************************************************** */
/*  */
/*  :::     ::::::::   */
/*   ft_strrchr.c      :+:   :+:    :+:   */
/*  +:+ +:+    +:+    */
/*   By: omadali <adalomer60@gmail.com>  +#+  +:+       +#+  */
/*  +#+#+#+#+#+   +#+    */
/*   Created: 2024/09/27 19:16:22 by omadali       #+#  #+#    */
/*   Updated: 2024/10/04 01:55:17 by omadali      ###   ########.fr    */
/*  */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *a, int c)
{
	size_t	e;
	char	*d;

	c = c % 256;
	if (c < 0)
		c += 256;
	d = (char *)a;
	e = 0;
	while (d[e] != '\0')
		e++;
	while (e > 0)
	{
		if (d[e] == c)
			return (&d[e]);
		e--;
	}
	if (d[e] == c)
		return (&d[e]);
	return (NULL);
}
