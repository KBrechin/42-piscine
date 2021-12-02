/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbrechin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 10:08:42 by kbrechin          #+#    #+#             */
/*   Updated: 2021/12/01 13:33:42 by kbrechin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	int	end;

	end = 'z' + 1;
	while (--end >= 'a')
	{
		write(1, &end, 1);
	}
	write(1, "\n", 1);
}
/*
int main(void)
{
	ft_print_reverse_alphabet();
}
*/
