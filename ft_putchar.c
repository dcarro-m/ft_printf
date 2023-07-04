/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarro-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 14:45:08 by dcarro-m          #+#    #+#             */
/*   Updated: 2023/07/03 13:32:06 by dcarro-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>
#include <unistd.h>

int	ft_putchar(char c)
{
	return (write(1, &c, 1));
}
/* int main (void)
{
	char	c;
	int		i;
	c = 'a';
	i = ft_putchar(c);
	printf("el entero es %d", i);
}*/
