/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: strodrig <strodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 10:53:40 by strodrig          #+#    #+#             */
/*   Updated: 2024/02/05 18:27:00 by strodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
		i++;
	return (i);
}

char	ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (*dest);
}

char	*ft_strdup(char *src)
{
	int		i;
	char	*dest;

	i = ft_strlen(src);
	dest = malloc(sizeof(char) * i);
	if (dest == 0)
		return (0);
	ft_strcpy(dest, src);
	return (dest);
}

/* #include <stdio.h>

int	main(void)
{
	char	str[] = "test";

	printf("%s\n", ft_strdup(str));
	return (0);
}*/
