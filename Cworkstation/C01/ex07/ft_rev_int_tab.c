/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: strodrig <strodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 12:49:11 by strodrig          #+#    #+#             */
/*   Updated: 2024/01/27 13:13:53 by strodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*#include <stdio.h>*/

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	troca;

	i = 0;
	while (i < size / 2)
	{
		troca = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = troca;
		i++;
	}
}

/*int	main(void)
{
	int tab[] = {1, 2, 3, 4, 5};
	int size = sizeof(tab) / sizeof(tab[0]);
	ft_rev_int_tab(tab, size);
	for(int i = 0; i < size; i++)
	{
		printf("%d", tab[i]);
	}
	return (0);
}*/
