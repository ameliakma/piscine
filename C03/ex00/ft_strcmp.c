/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalfou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 12:24:03 by akhalfou          #+#    #+#             */
/*   Updated: 2025/07/21 14:00:07 by akhalfou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char	*s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
		i++;
	return (s1[i] - s2[i]);
}
/*
#include <string.h>	
#include <stdio.h>
int main()
{
	printf("%d\n", ft_strcmp("hello", "hdllo"));
	printf("%d\n", strcmp("hello", "hdllo"));
}*/
