/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omadali <adalomer60@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 14:27:45 by omadali           #+#    #+#             */
/*   Updated: 2024/09/26 14:27:52 by omadali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int ft_tolower(int a)
{
    if (a >= 'A' && a<= 'Z')
    return a + 32;

    return a;

}