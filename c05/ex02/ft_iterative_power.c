/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbrechin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 15:29:23 by kbrechin          #+#    #+#             */
/*   Updated: 2021/12/15 11:29:29 by kbrechin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;

	i = nb;
	if (power < 0)
	{	
		return (0);
	}
	if (power == 0)
	{
		return (1);
	}
	while (power > 1)
	{
		nb *= i;
		power--;
	}
	return (nb);
}
/*
#include <stdio.h>
int main()
{
	int n = 6;
	int p = 3;
	printf("base:%d exponent:%d power:%d\n", n, p, ft_iterative_power(n, p));
}
*/
