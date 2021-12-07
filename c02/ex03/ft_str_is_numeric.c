/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbrechin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 17:56:40 by kbrechin          #+#    #+#             */
/*   Updated: 2021/12/07 18:19:08 by kbrechin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	z;

	z = 0;
	while (str[z])
	{
		while (str[z] < '1' || str[z] > '9')
		{
			return (0);
		}
		z++;
	}
	return (1);
}
/*
int main(void)
{
	int p =	ft_str_is_alpha("111");
	printf("%d\n", p);
}
*/
