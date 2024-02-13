/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: strodrig <strodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 17:06:51 by strodrig          #+#    #+#             */
/*   Updated: 2024/01/25 14:19:38 by strodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_number(char c)
{
	write(1, &c, 1);
}

void	ft_print_numbers(void)
{
	int	i;

	i = 0;
	while (i <= 9)
	{
		ft_print_number(i + '0');
		i++;
	}
}
