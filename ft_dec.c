/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dec.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarro-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 11:34:10 by dcarro-m          #+#    #+#             */
/*   Updated: 2023/07/03 11:46:42 by dcarro-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_dec(long n)
{
	int	i;

	i = 0;
	if (n < 0)
	{
		ft_putchar('-');
		n *= (-1);
		i++;
	}
	if (n < 10)
	{
		ft_putchar(n + '0');
		i++;
	}
	else
	{
		i++;
		i += ft_dec(n / 10);
		ft_putchar(n % 10 + '0');
	}
	return (i);
}
/* int main()
{
	int	n;
	int	len_n;
	n = 568;
	len_n = ft_dec(n);
	printf("/n el número de digitos es: %d", len_n);
}*/
