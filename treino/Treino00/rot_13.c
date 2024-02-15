/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: strodrig <strodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 16:43:26 by strodrig          #+#    #+#             */
/*   Updated: 2024/02/08 16:59:47 by strodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	i;

	i = 0;
	if (argc == 2)
	{
		while (argv[1])
		{
			if ((argv[1][i] >= 'a' && argv[1][i] <= 'm') || (argv[1][i] >= 'A'
					&& argv[1][i] <= 'M'))
			{
				argv[1][i] += 13;
			}
			else if ((argv[1][i] >= 'N' && argv[1][i] <= 'z')
				|| (argv[1][i] >= 'N' && argv[1][i] <= 'Z'))
			{
				argv[1][i] -= 13;
			}
			else
				write(1, &argv[1][i], 1);
		}
	}
	write(1, "\n", 1);
	return (0);
}
