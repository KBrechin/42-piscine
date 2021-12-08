/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbrechin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 15:21:17 by kbrechin          #+#    #+#             */
/*   Updated: 2021/12/08 20:25:53 by kbrechin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	while (n >= 0 && src[n] != 0)
	{
		dest[n] = src[n];
		n++;
	}
	if (dest[n] > src[n])
	{
		dest[n] = '\0';
	}
	return (dest);
}

#include <stdio.h>
int	main()
{
	char destination[] = {"whats good my g!"};
	char source[] = {"My man!"};
	ft_strncpy(destination, source, 0);
	printf("%s\n", destination);
}

