/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbrechin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 12:48:00 by kbrechin          #+#    #+#             */
/*   Updated: 2021/12/15 11:14:10 by kbrechin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_iterative_factorial(int nb)
{
	int	i;

	i = nb;
	if (nb < 0)
	{
		return (0);
	}
	if (nb == 0)
	{
		return (1);
	}	
	while (i > 1)
	{
		nb = nb * (i - 1);
		i--;
	}
	return (nb);
}
/*
#include <stdio.h>
int main()
{
	
	int n = 6;
	printf("%d %d\n", n, ft_iterative_factorial(n));
}
*/
