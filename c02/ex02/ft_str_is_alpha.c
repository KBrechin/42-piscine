/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbrechin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 16:04:51 by kbrechin          #+#    #+#             */
/*   Updated: 2021/12/07 17:55:48 by kbrechin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	z;

	z = 0;
	while (str[z])
	{
		while ((str[z] < 'a' || str[z] > 'z') && (str[z] < 'A' || str[z] > 'Z'))
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
	int p =	ft_str_is_alpha("");
	printf("%d\n", p);  
}
*/
