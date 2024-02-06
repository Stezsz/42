/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: strodrig <strodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 15:02:44 by strodrig          #+#    #+#             */
/*   Updated: 2024/02/05 17:18:31 by strodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*array;

	i = 0;
	array = malloc(sizeof(int) * (max - min));
	if (min >= max)
		return (NULL);
	while (min < max)
	{
		array[i] = min;
		min++;
		i++;
	}
	*range = array;
	return (i);
}
