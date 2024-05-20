/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_len.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamsyah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 14:48:12 by bamsyah           #+#    #+#             */
/*   Updated: 2024/05/20 02:24:22 by bamsyah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

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
