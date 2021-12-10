/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbrechin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 20:42:35 by kbrechin          #+#    #+#             */
/*   Updated: 2021/12/09 21:02:48 by kbrechin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strncat(char *dest, char *scr, unsigned int nb)
{
	unsigned int	pp;
	unsigned int	p;

	pp = 0;
	p = 0;
	while (dest[pp] > 0)
	{
		pp++;
	}
	while (p < nb && scr[p])
	{
		dest[pp] = scr[p];
		p++;
		pp++;
	}
	dest[pp] = '\0';
	return (dest);
}

#include <stdio.h>
#include <string.h>
int main()
{
	char	destination[] = "long ";
	char	source[] = "john";
  	ft_strncat(destination, source, 4);
	printf("%s\n", destination);
	char	destination1[50] = "long ";
	char	source1[50] = "john";
  	strncat(destination1, source1, 4);
	printf("%s\n", destination1);
}
