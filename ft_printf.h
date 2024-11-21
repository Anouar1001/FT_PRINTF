/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboukhmi <aboukhmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 22:05:19 by aboukhmi          #+#    #+#             */
/*   Updated: 2024/11/21 16:55:30 by aboukhmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int		ft_putchar(int c);

int		ft_putnbr(int n);

int		ft_puthex(unsigned int c, int i);

int		ft_putp(void *ptr);

int		ft_putstr(char *s);

int		ft_putunsigned(unsigned int n);

int		ft_putunsigned(unsigned int n);

int		ft_helper(char c, va_list args);

int		ft_printf(const char *s, ...);

#endif