/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsignedec.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarro-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 11:33:28 by dcarro-m          #+#    #+#             */
/*   Updated: 2023/07/03 11:51:51 by dcarro-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_unsignedec(unsigned int n)
{
	int	i;

	i = 0;
	if (n < 10)
	{
		ft_putchar(n + '0');
		i++;
	}
	else
	{
		i++;
		i += ft_unsignedec(n / 10);
		ft_putchar(n % 10 + '0');
	}
	return (i);
}
/* int main ()
{
	int n;
	int len_n;
	n = 586;
	len_n = ft_decimal_us(n);
	printf("\n numero de digitos: %u", len_n);
	return (0);
} */
