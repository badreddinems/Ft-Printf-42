/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamsyah <bamsyah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 13:46:18 by bamsyah           #+#    #+#             */
/*   Updated: 2023/03/16 13:50:19 by bamsyah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void	ft_putunbr(unsigned int nbr, int *len)
{
	if (nbr >= 0 && nbr <= 9)
		*len += ft_putchar_len(nbr + '0');
	else
	{
		ft_putnbr_len(nbr / 10, len);
		ft_putnbr_len(nbr % 10, len);
	}
}
