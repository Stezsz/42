/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: strodrig <strodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 17:19:52 by strodrig          #+#    #+#             */
/*   Updated: 2024/02/10 15:19:29 by strodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strmegalen(int size, char **strs, char *sep)
{
	char	*str;
	int		len;
	int		i;

	i = 0;
	len = 0;
	while (i < size)
	{
		len += ft_strlen(strs[i]);
		i++;
	}
	len += ft_strlen(sep) * (size - 1);
	if (size <= 0)
		len = 1;
	str = (char *)malloc(sizeof(char) * len);
	if (!str)
		return (0);
	return (str);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	int		k;
	char	*str;

	str = ft_strmegalen(size, strs, sep);
	i = -1;
	k = 0;
	while (++i < size)
	{
		j = 0;
		while (strs[i][j])
		{
			str[k++] = strs[i][j];
			j++;
		}
		j = 0;
		while (sep[j] && i != size - 1)
		{
			str[k++] = sep[j];
			j++;
		}
	}
	str[k] = '\0';
	return (str);
}

/* #include <stdio.h>

int	main(void)
{
	char	*str[6];
	char	*result;

	str[0] = "hello";
	str[1] = "world";
	str[2] = "this";
	str[3] = "is";
	str[4] = "a";
	str[5] = "test";
	result = ft_strjoin(6, str, " | ");
	printf("%s\n", result);
	return (0);
} */
