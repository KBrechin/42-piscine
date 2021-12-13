/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbrechin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 13:04:18 by kbrechin          #+#    #+#             */
/*   Updated: 2021/12/12 16:46:14 by kbrechin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	pp;
	int	p;

	pp = 0;
	p = 0;
	while (str[pp] > 0)
	{
		pp++;
		p++;
	}
	return (p);
}
/*
#include <stdio.h>
int main()
{
	int sc = ft_strlen("sugma");
	printf("%d\n", sc);
}
*/
