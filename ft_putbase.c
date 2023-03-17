/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putbase.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamsyah <bamsyah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 13:55:57 by bamsyah           #+#    #+#             */
/*   Updated: 2023/03/17 15:34:18 by bamsyah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putbase(unsigned long i, char *s, int *len)
{
	if (i >= 16)
	{
		ft_putbase(i / 16, s, len);
		ft_putbase(i % 16, s, len);
	}
	else
	{
		*len += ft_putchar_len(s[i]);
	}
}
