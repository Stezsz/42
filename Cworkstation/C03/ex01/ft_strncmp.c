/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: strodrig <strodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 12:44:20 by strodrig          #+#    #+#             */
/*   Updated: 2024/01/29 19:30:34 by strodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
	{
		return (0);
	}
	while (s1[i] == s2[i] && s1[i] != '\0' && i < n - 1)
	{
		i++;
	}
	if (s1[i] == s2[i])
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
	printf("%d\n", ft_strncmp("test", "test1", 10));
	printf("%d\n", ft_strncmp("test", "te", 10));
	printf("%d\n", ft_strncmp("te", "test", 10));
	printf("%d\n", ft_strncmp("Test", "Test", 10));
}
