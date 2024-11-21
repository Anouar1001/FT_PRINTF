/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboukhmi <aboukhmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 22:14:41 by aboukhmi          #+#    #+#             */
/*   Updated: 2024/11/21 17:01:22 by aboukhmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *s, ...)
{
	va_list	args;
	int		count;

	if (write(1, 0, 0) == -1)
		return (-1);
	count = 0;
	va_start(args, s);
	while (*s != '\0')
	{
		if (*s == '%')
			count += ft_helper(*(++s), args);
		else
			count += write(1, s, 1);
		s++;
	}
	return (count);
}
