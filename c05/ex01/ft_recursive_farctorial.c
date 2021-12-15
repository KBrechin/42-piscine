/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_farctorial.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbrechin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 13:52:48 by kbrechin          #+#    #+#             */
/*   Updated: 2021/12/15 11:20:56 by kbrechin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
	{
		return (0);
	}
	if (nb == 0 || nb == 1)
	{
		return (1);
	}
	return (nb * ft_recursive_factorial(nb - 1));
}
/*
#include <stdio.h>
int main()
{
	int n = 5;
	printf("%d %d\n", n, ft_recursive_factorial(n));
}
*/
