/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_helper.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboukhmi <aboukhmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 22:56:26 by aboukhmi          #+#    #+#             */
/*   Updated: 2024/11/21 17:01:10 by aboukhmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_helper(char c, va_list args)
{
	int	count;

	count = 0;
	if (c == 'd' || c == 'i')
		count += ft_putnbr(va_arg(args, int));
	else if (c == 'p')
		count += ft_putp(va_arg(args, void *));
	else if (c == 'x')
		count += ft_puthex(va_arg(args, unsigned int), 1);
	else if (c == 'X')
		count += ft_puthex(va_arg(args, unsigned int), 2);
	else if (c == 'c')
		count += ft_putchar(va_arg(args, int));
	else if (c == 's')
		count += ft_putstr(va_arg(args, char *));
	else if (c == 'u')
		count += ft_putunsigned(va_arg(args, unsigned int));
	else
		count += ft_putchar(c);
	return (count);
}
