/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putpp.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboukhmi <aboukhmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 22:11:50 by aboukhmi          #+#    #+#             */
/*   Updated: 2024/11/21 16:59:18 by aboukhmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_putphelp(unsigned long k)
{
	char	*p;
	int		count;

	count = 0;
	p = "0123456789abcdef";
	if (k >= 16)
		count += ft_putphelp(k / 16);
	count += write(1, &p[k % 16], 1);
	return (count);
}

int	ft_putp(void *ptr)
{
	int	count;

	count = 0;
	count += write(1, "0x", 2);
	count += ft_putphelp((unsigned long)ptr);
	return (count);
}
