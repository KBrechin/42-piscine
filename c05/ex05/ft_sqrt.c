/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbrechin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 14:46:31 by kbrechin          #+#    #+#             */
/*   Updated: 2021/12/15 12:18:26 by kbrechin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_sqrt(int nb)
{
	int i;

	i = 0;
	while  (i * i <= nb && i <= nb)
	{
		if (i * i == nb)
			return (i);
		else 
			i++;
	}
	return (0);
}

#include <stdio.h>
int main()
{
	int n = 100;
	ft_sqrt(n);
	printf("%d, %d\n", n,  ft_sqrt(n));
}
