/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbrechin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 18:33:13 by kbrechin          #+#    #+#             */
/*   Updated: 2021/12/07 18:36:26 by kbrechin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	p;

	p = 0;
	while (str[p])
	{
		while (str[p] < 'A' || str[p] > 'Z')
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
	int g = ft_str_is_lowercase("\0");
	printf("%d\n", g);
}
*/
