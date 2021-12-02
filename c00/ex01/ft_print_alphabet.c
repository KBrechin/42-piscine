/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbrechin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 09:45:02 by kbrechin          #+#    #+#             */
/*   Updated: 2021/12/02 11:19:15 by kbrechin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	start;

	start = 'a' - 1;
	while (++start <= 'z')
	{
		write(1, &start, 1);
	}
	write(1, "\n", 1);
}
/*
int main(void)
{
	ft_print_alphabet();
}
*/
