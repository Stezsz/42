/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_words.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: strodrig <strodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 15:07:30 by strodrig          #+#    #+#             */
/*   Updated: 2024/02/14 15:26:01 by strodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	count_words(char *str)
{
	int	i;
	int	w;

	w = 0;
	i = 0;
	while (str[i])
	{
		if ((str[i] == 32 || str[i] == 9))
		{
			if (str[i + 1] != 32 && str[i + 1] != 9 && str[i + 1] != '\0')
				w++;
		}
		i++;
	}
	if (str[0] != 32 && str[0] != 9)
		w += 1;
	return (w);
}

#include <stdio.h>

int	main(void)
{
	char	str[] = "1 2 3	456 ";

	printf("%d\n", count_words(str));
}
