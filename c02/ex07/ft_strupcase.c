/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbrechin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 19:38:02 by kbrechin          #+#    #+#             */
/*   Updated: 2021/12/07 19:53:47 by kbrechin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	a;

	a = 0;
	while (str[a])
	{
		if (str[a] >= 'a' && str[a] <= 'z')
		{
			str[a] = str[a] -32;
		}
		a++;
	}
	return (str);
}
/*
int main(void)
{
	char a[] = {"abcdefghijklmnopqrstuvwxyz1"};
	ft_strupcase(a);
	printf("%s\n", a);
}
*/
