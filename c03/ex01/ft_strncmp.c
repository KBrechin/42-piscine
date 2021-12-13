/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbrechin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 10:04:43 by kbrechin          #+#    #+#             */
/*   Updated: 2021/12/12 12:11:07 by kbrechin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	a;

	a = 0;
	while (a < n && (s1[a] > 0 || s2[a] > 0))
	{
		if (s1[a] > s2[a])
		{
			return (1);
		}
		if (s1[a] < s2[a])
		{
			return (-1);
		}
		a++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>
int main()
{
	char	s1[] = {"aaaaaae"};
	char	s2[] = {"aaaaaa1"};
	int	g = ft_strncmp(s1, s2, 10); 
	printf("%d\n", g);
	char	s11[] = {"aaaaaaae"};
	char	s22[] = {"aaaaaaa1"};
	int p = strncmp(s11, s22, 10);
	printf("%d\n", p);
}
*/
