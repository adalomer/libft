/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omadali <adalomer60@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 20:07:39 by omadali           #+#    #+#             */
/*   Updated: 2024/09/27 20:12:43 by omadali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

  int ft_memcmp(const void *s1, const void *s2, int n)
    {
	int a;
	unsigned char *f;
	unsigned char *e;
	f = (unsigned char *)s1;
	e = (unsigned char *)s2;
	a = 0;
	if (!f || !e)
		return (0);
	while(f[a] != '\0' && e[a] != '\0' && a < n)
	{
		if(f[a] - e[a] != 0)
			return (f[a]-e[a]);
		a++;
	}
	return (0);
   }
   