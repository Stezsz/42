/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: strodrig <strodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 16:04:14 by strodrig          #+#    #+#             */
/*   Updated: 2024/02/14 16:11:59 by strodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	check_doup(char *str, char c, int pos)
{
	int i;

	i = 0;
	while(i < pos)
	{
		if (str[i] == c)
			return (0);
		i++;
	}
	return (1);
}

int	main(int ac, char **av)
{
	int i;
	int j;

	if (ac == 3)
	{
		i = 0;
		while(av[1][i])
		{
			if(check_doup(av[1], av[1][i], i) == 1)
				write(1, &av[1][i], 1);
			i++;
		}
		j = i;
		i = 0;
		while(av[2][i])
		{
			if((check_doup(av[2], av[2][i], i) == 1) && (check_doup(av[1], av[2][i], j) == 1))
				write(1, &av[2][i], 1);
			i++;
		}
	}
}
