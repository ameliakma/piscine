/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalfou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 17:37:49 by akhalfou          #+#    #+#             */
/*   Updated: 2025/10/21 17:54:34 by akhalfou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

#include <stdio.h>
#include <string.h>
int	main()
{
	char	src[]  = "justin";
	char	dest[50] = "Je veux reussir ma piscine";
	char	src1[] = "justin";
	char	dest1[50] = "Je veux reussir ma piscine";
	ft_strcat(dest, src);
	strcat(dest1, src1);
	printf("%s", dest);
}
