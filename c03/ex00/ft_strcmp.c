/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbrechin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 18:40:46 by kbrechin          #+#    #+#             */
/*   Updated: 2021/12/12 11:44:16 by kbrechin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	c;

	c = 0;
	while (s1[c] > 0 || s2[c] > 0)
	{
		if (s1[c] > s2[c])
		{
			return (1);
		}
		else if (s1[c] < s2[c])
		{
			return (-1);
		}
	c++;
	}
	return (0);
}
/*
#include <string.h>
#include <stdio.h>
int	main()
{
	int i = ft_strcmp("aaa", "aaz");
	printf("%d\n", i);
	int g = strcmp("aaa", "aaz");
	printf("%d\n", g);
}
*/
