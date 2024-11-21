/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putu.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboukhmi <aboukhmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 22:13:04 by aboukhmi          #+#    #+#             */
/*   Updated: 2024/11/21 16:59:34 by aboukhmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putunsigned(unsigned int n)
{
	int				count;

	count = 0;
	if (n > 9)
	{
		count += ft_putnbr(n / 10);
	}
	count += ft_putchar((n % 10) + '0');
	return (count);
}
