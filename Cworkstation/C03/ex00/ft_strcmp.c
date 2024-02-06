/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: strodrig <strodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 12:44:19 by strodrig          #+#    #+#             */
/*   Updated: 2024/01/29 17:14:20 by strodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}
	if (s2[i] == s1[i])
	{
		return (0);
	}
	else
	{
		return (s1[i] - s2[i]);
	}
}

int	main(void)
{
	printf("%d\n", ft_strcmp("test", "test1"));
	printf("%d\n", ft_strcmp("test", "te"));
	printf("%d\n", ft_strcmp("te", "test"));
	printf("%d\n", ft_strcmp("Test", "Test"));
}
