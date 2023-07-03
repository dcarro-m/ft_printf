/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexadec.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarro-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 09:24:10 by dcarro-m          #+#    #+#             */
/*   Updated: 2023/07/03 11:51:20 by dcarro-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>
#include <unistd.h>

/*int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}*/

int	ft_hexadec(unsigned long long n, char c)
{
	unsigned int	i;

	i = 0;
	if (n < 16)
	{
		if (c == 'x')
			i += ft_putchar("0123456789abcdef"[n % 16]);
		else
			i += ft_putchar("0123456789ABCDEF"[n % 16]);
	}
	else
	{
		i += ft_hexadec(n / 16, c);
		if (c == 'x')
			i += ft_putchar("0123456789abcdef"[n % 16]);
		else
			i += ft_putchar("0123456789ABCDEF"[n % 16]);
	}
	return (i);
}

/*int	main()
{
	unsigned int  numero = -5689725;
	char c = 'X';
	char z = 'x';

	ft_hexadec(numero, c);
	printf("\n");
	ft_printf("%X \n", numero);
	ft_hexadec(numero, z);
	printf("\n");
	ft_printf("%x \n", numero);
	return (0);
}*/
