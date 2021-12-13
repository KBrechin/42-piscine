/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbrechin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 10:58:59 by kbrechin          #+#    #+#             */
/*   Updated: 2021/12/12 12:14:05 by kbrechin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *scr)
{
	int	pp;
	int	p;

	pp = 0;
	p = 0;
	while (dest[pp] > '\0')
	{
		pp++;
	}
	while (scr[p] > '\0')
	{
		dest[pp] = scr[p];
		p++;
		pp++;
	}
	dest[pp] = '\0';
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>
int main()
{
	char	destination[] = "long ";
	char	source[100] = "john";
  	ft_strcat(destination, source);
	printf("%s\n", destination);
}
*/
