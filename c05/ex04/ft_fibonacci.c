/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbrechin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 19:53:01 by kbrechin          #+#    #+#             */
/*   Updated: 2021/12/15 11:40:23 by kbrechin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index == 0)
	{
		return (0);
	}
	if (index == 1)
	{
		return (1);
	}
	if (index < 0)
	{
		return (-1);
	}
	return (ft_fibonacci(index - 1) + ft_fibonacci (index - 2));
}
/*
#include <stdio.h>
int main()
{
	printf("%d\n", ft_fibonacci(12));
}
*/
