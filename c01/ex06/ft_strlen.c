/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbrechin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 18:13:35 by kbrechin          #+#    #+#             */
/*   Updated: 2021/12/04 18:35:23 by kbrechin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int ft_strlen(char *str)
{
	int strlen;

	strlen = 0;
	while (*(str + strlen) > 0)
	{
		strlen++;
	}
	return(strlen);
}

int main(void)
{
	
	int	n = ft_strlen("123456789");
	printf("%d", n);
}
