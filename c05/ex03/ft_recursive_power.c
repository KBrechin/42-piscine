/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbrechin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 18:02:02 by kbrechin          #+#    #+#             */
/*   Updated: 2021/12/15 11:38:39 by kbrechin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
	{
		return (0);
	}
	if (power == 0)
	{
		return (1);
	}
	if (power > 1)
	{
		return (nb * ft_recursive_power(nb, power - 1));
	}
	return (nb);
}
/*
#include <stdio.h>
int main()
{
	int n = 6;
	int p = -1;
	printf("base:%d exponent:%d power:%d\n", n, p, ft_recursive_power(n, p));
}
*/
