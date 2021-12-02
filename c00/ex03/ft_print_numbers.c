/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbrechin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 10:37:45 by kbrechin          #+#    #+#             */
/*   Updated: 2021/12/02 11:20:58 by kbrechin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_numbers(void)
{
	int	num_start;

	num_start = '0' - 1;
	while (++num_start <= '9')
	{
		write(1, &num_start, 1);
	}
	write(1, "\n", 1);
}
/*
int main(void)
{
	ft_print_numbers();
}
*/
