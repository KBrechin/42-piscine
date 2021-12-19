/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbrechin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 15:21:17 by kbrechin          #+#    #+#             */
/*   Updated: 2021/12/07 16:03:46 by kbrechin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	a;

	a = 0;
	while (a < n && src[a] != 0)
	{
		dest[a] = src[a];
		a++;
	}
	if (dest[a] > src[a])
	{
			dest[a] = 0;
	}
	return (dest);
}
/*
int	main()
{
	char destination[] = {"whats good my g!"};
	char source[] = {"My man!"};
	ft_strncpy(destination, source, 20);
	printf("%s\n", destination);
}
*/
