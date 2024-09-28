/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omadali <adalomer60@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 19:16:22 by omadali           #+#    #+#             */
/*   Updated: 2024/09/27 19:26:37 by omadali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strrchr(const char *a, int c)
{
	int e;
    char *d;
	e = 0;
    d = (char *)a;
	while(d[e] != '\0')
	e++;
    while(e > -1)
    {
        if (d[e] == c)
        return(&d[e]);
        e--;
    }
    return (0);
}