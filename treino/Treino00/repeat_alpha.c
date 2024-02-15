/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: strodrig <strodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 13:45:21 by strodrig          #+#    #+#             */
/*   Updated: 2024/02/08 14:04:43 by strodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	i;
	int	diff;

	i = 0;
	if (argc != 2)
		write(1, "\n", 1);
	else
	{
		while (argv[1][i] != '\0')
		{
			if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
			{
				diff = (argv[1][i] - 'a');
			}
			else
			{
				diff = (argv[1][i] - 'A');
			}
			while (diff >= 0)
			{
				write(1, &argv[1][i], 1);
				diff--;
			}
			i++;
		}
		write(1, "\n", 1);
	}
}
