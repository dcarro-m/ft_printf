/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarro-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 11:25:09 by dcarro-m          #+#    #+#             */
/*   Updated: 2023/07/03 13:32:03 by dcarro-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_compare(va_list args, const char c)
{
	int	fs;

	fs = 0;
	if (c == 'c')
		fs += ft_putchar(va_arg(args, int));
	else if (c == 's')
		fs += ft_putstr(va_arg(args, char *));
	else if (c == 'X' || c == 'x')
		fs += ft_hexadec(va_arg(args, unsigned int), c);
	else if (c == 'p')
		fs += ft_voidptr(va_arg(args, unsigned long long));
	else if (c == 'd' || c == 'i')
		fs += ft_dec(va_arg(args, int));
	else if (c == 'u')
		fs += ft_unsignedec(va_arg(args, unsigned int));
	else if (c == '%')
		fs += ft_putchar('%');
	return (fs);
}

int	ft_printf(char const *str, ...)
{
	int		i;
	int		count;
	va_list	args;

	va_start(args, str);
	i = 0;
	count = 0;
	if ((ft_strlen(str) == 1) && str[i] == '%')
		return (count);
	while (str[i] != '\0')
	{
		if (str[i] == '%' && str[i + 1])
		{
			count += ft_compare(args, str[i + 1]);
			i++;
		}
		else
			count += ft_putchar(str[i]);
		i++;
	}
	va_end(args);
	return (count);
}

/*int	main(void)
{
	char	*s;
	int		count1;
	int		count2;

	s = "%d";
	count2 = '6';
	count1 = printf("%s \n", s);
	printf("Funcion printf original %d\n", count2);
	count1 = ft_printf("%s \n", s);
	ft_printf("Función ft_printf %d\n", count2);
	return (0);
}*/
