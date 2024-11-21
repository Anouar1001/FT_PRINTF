/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboukhmi <aboukhmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 22:08:37 by aboukhmi          #+#    #+#             */
/*   Updated: 2024/11/21 15:32:26 by aboukhmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_putlower(unsigned int k)
{
	char	*p;
	int		count;

	count = 0;
	p = "0123456789abcdef";
	if (k >= 16)
		count += ft_putlower(k / 16);
	count += write(1, &p[k % 16], 1);
	return (count);
}

static int	ft_putupper(unsigned int k)
{
	char	*p;
	int		count;

	count = 0;
	p = "0123456789ABCDEF";
	if (k >= 16)
		count += ft_putupper(k / 16);
	count += write(1, &p[k % 16], 1);
	return (count);
}

int	ft_puthex(unsigned int c, int i)
{
	if (i == 1)
		return (ft_putlower(c));
	else
		return (ft_putupper(c));
}
