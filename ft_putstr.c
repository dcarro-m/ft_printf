/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarro-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 14:51:22 by dcarro-m          #+#    #+#             */
/*   Updated: 2023/07/03 11:51:43 by dcarro-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <unistd.h>
#include <stdio.h>

/*int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}*/

int	ft_putstr(char *s)
{
	int	i;

	i = 0;
	if (!s)
		return (write(1, "(null)", 6));
	while (s[i])
		ft_putchar(s[i++]);
	return (i);
}

/*int	main(void)
{
	char	a[] = "pajaro";
	int	i;

	i = ft_putstr(a);
	printf("\n %d \n", i);
}*/
