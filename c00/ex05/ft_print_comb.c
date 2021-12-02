/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbrechin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 12:46:10 by kbrechin          #+#    #+#             */
/*   Updated: 2021/12/02 13:37:08 by kbrechin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_comb(void)
{
	int	hun;
	int	ten;
	int	one;

	hun = '0';
	while (hun <= '7')
	{
		ten = hun;
		while (++ten <= '8')
		{
			one = ten;
			while (++one <= '9')
			{
				write(1, &hun, 1);
				write(1, &ten, 1);
				write(1, &one, 1);
				if (hun != '7' || ten != '8' || one != '9')
				{
					write(1, ", ", 2);
				}
			}
		}
	hun++;
	}	
}
/*
int main(void)
{
	ft_print_comb();
}
*/
