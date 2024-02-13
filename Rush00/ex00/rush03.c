/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: strodrig <strodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 15:42:19 by strodrig          #+#    #+#             */
/*   Updated: 2024/01/28 12:15:12 by strodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	print_line(int x, int left, int middle, int right)
{
	int	vertical_line;

	vertical_line = 1;
	if (x > 0)
	{
		ft_putchar(left);
	}
	while (vertical_line < (x - 1))
	{
		ft_putchar(middle);
		vertical_line++;
	}
	if (x > 1)
	{
		ft_putchar(right);
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	horizon_line;

	horizon_line = 1;
	if (x > 0 && y > 0)
	{
		print_line(x, 'A', 'B', 'C');
	}
	while (horizon_line < y - 1 && x > 0)
	{
		print_line(x, 'B', ' ', 'B');
		horizon_line++;
	}
	if (y > 1 && x > 0)
	{
		print_line(x, 'A', 'B', 'C');
	}
}
