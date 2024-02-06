/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: strodrig <strodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 11:22:35 by strodrig          #+#    #+#             */
/*   Updated: 2024/01/29 16:07:12 by strodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_convert_hexa(unsigned char i)
{
	char	*hexabase;

	hexabase = "0123456789abcdef";
	if (i / 16 > 0)
	{
		ft_putchar(hexabase[i / 16]);
		ft_putchar(hexabase[i % 16]);
	}
	else
	{
		ft_putchar('0');
		ft_putchar(hexabase[i]);
	}
}

void	ft_putstr_non_printable(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 126)
		{
			ft_putchar('\\');
			ft_convert_hexa(str[i]);
		}
		else
		{
			ft_putchar(str[i]);
		}
		i++;
	}
}

int	main(void)
{
	char	str[] = "test\n";

	ft_putstr_non_printable(str);
	return (0);
}
