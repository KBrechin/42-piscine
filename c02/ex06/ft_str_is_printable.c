/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbrechin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 18:37:12 by kbrechin          #+#    #+#             */
/*   Updated: 2021/12/07 19:37:35 by kbrechin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	p;

	p = 0;
	while (str[p])
	{
		while (str[p] < 31 || str[p] > 127)
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
	int g = ft_str_is_lowercase("");
	printf("%d\n", g);
}
*/
