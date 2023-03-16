#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <stdarg.h>

int	ft_putchar_len(char c);
int	ft_printf(const char *str, ...);
int	ft_putstr_len(char *str);
void	ft_putnbr_len(int nbr, int *len);

#endif