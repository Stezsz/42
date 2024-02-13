/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: strodrig <strodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 12:44:24 by strodrig          #+#    #+#             */
/*   Updated: 2024/01/31 19:10:09 by strodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	s;
	unsigned int	countd;

	s = 0;
	countd = ft_strlen(dest);
	if (size == 0 || size <= countd)
	{
		return (ft_strlen(src) + size);
	}
	while (src[s] && s < size - countd - 1)
	{
		dest[countd + s] = src[s];
		s++;
	}
	dest[countd + s] = '\0';
	return (ft_strlen(src) + countd);
}

/*#include <stdio.h>

int	main(void)
{
	char	src[] = "tesdsdt";
	char	dest[20] = "tessdsdt";

	printf("%i \n", ft_strlcat(dest, src, 20));
	return (0);
}*/
