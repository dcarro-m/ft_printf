/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_voidptr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarro-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 11:32:47 by dcarro-m          #+#    #+#             */
/*   Updated: 2023/07/03 11:51:04 by dcarro-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_voidptr(unsigned long long n)
{
	int	i;

	i = 0;
	i += ft_putstr("0x");
	i += ft_hexadec(n, 'x');
	return (i);
}
/* int main ()
{
	int n;
	char	c;
	int len_n;
	n = 500;
	c = 'x';
	len_n = ft_voidptr(n);
	//printf("\n numero de digitos: %u", len_n);
	return (0);
} */
