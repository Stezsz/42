/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: strodrig <strodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 12:20:38 by strodrig          #+#    #+#             */
/*   Updated: 2024/01/27 13:15:08 by strodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*#include <stdio.h>*/

void	swap(int *a, int *b)
{
	int	i;

	i = *a;
	*a = *b;
	*b = i;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	test;

	i = 1;
	while (i < size)
	{
		test = i;
		while (test > 0 && *(tab + test - 1) > *(tab + test))
		{
			swap(tab + test, tab + test - 1);
			test--;
		}
		i++;
	}
}

/*int	main(void)
{
	int tab[] = {3, 1, 8, 4, 7};
	int size = sizeof(tab) / sizeof(tab[0]);
	ft_sort_int_tab(tab, size);
	for(int i = 0; i < size; i++)
	{
		printf("%d", tab[i]);
	}
}*/
