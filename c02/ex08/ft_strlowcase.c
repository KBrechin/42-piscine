/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbrechin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 19:54:29 by kbrechin          #+#    #+#             */
/*   Updated: 2021/12/07 19:58:49 by kbrechin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	a;

	a = 0;
	while (str[a])
	{
		if (str[a] >= 'A' && str[a] <= 'Z')
		{
			str[a] = str[a] +32;
		}
		a++;
	}
	return (str);
}
/*
int main(void)
{
	char a[] = {"ABCDEFGHIJKLMNOPQRSTUVWXYZ1"};
	ft_strlowcase(a);
	printf("%s\n", a);
}
*/
