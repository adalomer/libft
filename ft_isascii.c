/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omadali <adalomer60@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 22:01:40 by omadali           #+#    #+#             */
/*   Updated: 2024/10/03 21:12:33 by omadali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int b)
{
	if (b >= 0 && b <= 127)
		return (1);
	return (0);
}
