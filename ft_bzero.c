/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omadali <adalomer60@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 13:55:15 by omadali           #+#    #+#             */
/*   Updated: 2024/09/27 14:20:35 by omadali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_bzero(void *s, int n)
{
    int a;
    char *b;

    b = s;
    a = 0;
    while(a < n )
    {
        b[a] = 0;
        a++;
    }   
}