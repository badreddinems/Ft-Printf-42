/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_len.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamsyah <bamsyah@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 14:48:12 by bamsyah           #+#    #+#             */
/*   Updated: 2023/03/15 17:47:19 by bamsyah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_len(int nbr, int *len)
{
	if (nbr == INT_MIN)
	{
		write(1, "-2147483648", 11);
		*len += 11;
	}
	else if (nbr >= 0 && nbr <= 9)
		*len += ft_putchar_len(nbr + '0');
	else if (nbr < 0)
	{
		*len += ft_putchar_len('-');
		ft_putnbr_len(nbr * (-1), len);
	}
	else
	{
		ft_putnbr_len(nbr / 10, len);
		ft_putnbr_len(nbr % 10, len);
	}
}