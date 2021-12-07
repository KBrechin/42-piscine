/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbrechin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 14:52:55 by kbrechin          #+#    #+#             */
/*   Updated: 2021/12/07 16:01:59 by kbrechin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	a;

	a = 0;
	while (src[a] > 0)
	{
		dest[a] = src[a];
		a++;
	}
	dest[a] = 0;
	return (dest);
}
/*
int main(void)
{
	char source[] = {"hel"};
	char destination[] = {"oh no my"};
	ft_strcpy(destination, source);
	printf("%s\n", destination);
}
*/
