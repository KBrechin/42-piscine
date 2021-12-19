/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbrechin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 14:57:31 by kbrechin          #+#    #+#             */
/*   Updated: 2021/12/15 15:58:26 by kbrechin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	s;

	s = 1;
	while (argc > s)
	{
		i = 0;
		while (argv[s][i])
		{
			write (1, &argv[s][i], 1);
			i++;
		}
		write (1, "\n", 1);
		s++;
	}
}