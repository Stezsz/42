/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: strodrig <strodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 11:01:43 by strodrig          #+#    #+#             */
/*   Updated: 2024/02/05 10:30:09 by strodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char *argv[])
{
	int	i;
	int	j;

	j = 1;
	if (argc > 1)
	{
		while (j < argc)
		{
			i = 0;
			while (argv[j][i] != '\0')
			{
				ft_putchar(argv[j][i]);
				i++;
			}
			j++;
			ft_putchar('\n');
		}
	}
	return (0);
}
