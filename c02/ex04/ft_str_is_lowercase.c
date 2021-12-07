/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbrechin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 18:20:29 by kbrechin          #+#    #+#             */
/*   Updated: 2021/12/07 18:32:36 by kbrechin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	p;

	p = 0;
	while (str[p])
	{
		while (str[p] < 'a' || str[p] > 'z')
		{
			return (0);
		}
	p++;
	}
	return (1);
}
/*
int main(void)
{
	int g = ft_str_is_lowercase("aaaaaaa");
	printf("%d\n", g);
}
*/
