/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarro-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 08:51:07 by dcarro-m          #+#    #+#             */
/*   Updated: 2023/07/03 09:20:27 by dcarro-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <string.h>
# include <stdio.h>
# include <limits.h>
# include <stdarg.h>

int			ft_putchar(char c);
int			ft_putstr(char *s);
int			ft_hexadec(unsigned long long n, char c);
int			ft_dec(long n);
int			ft_unsignedec(unsigned int n);
int			ft_voidptr(unsigned long long n);
int			ft_printf(char const *str, ...);
size_t		ft_strlen(const char *s);

#endif
