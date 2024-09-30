/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omadali <adalomer60@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 16:12:08 by omadali           #+#    #+#             */
/*   Updated: 2024/09/30 17:01:44 by omadali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int a;

	if ( !s || !f )
		return;
	a = 0;
	while(s[a] != '\0')
	{
		f(a,(s+a));
		a++;
	}
}