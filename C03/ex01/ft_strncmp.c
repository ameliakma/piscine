/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalfou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 15:11:39 by akhalfou          #+#    #+#             */
/*   Updated: 2025/07/23 22:46:42 by akhalfou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
		i++;
	if (i == n)
		return (0);
	return (s1[i] - s2[i]);
}
/*
#include <string.h>
#include <stdio.h>
int	main()
{
	char	*s1 = "bysdkfha";
	char	*s2 = "ayosdfljsldfj";
	printf("%d", ft_strncmp(s1, s2, 3));
	printf("%d", strncmp(s1, s2, 3));

}*/
