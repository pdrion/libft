/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrion <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 02:13:26 by pdrion            #+#    #+#             */
/*   Updated: 2019/11/06 02:49:06 by pdrion           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char *ft_strchr(const char *s, int c)
{
	char	ch;
	char	*src;
	
	ch = (char)c;
	src = (char *)s;
	while(*src != '\0')
	{
		if (*src == ch)
		{
			return(src);
		}
		src++;
	}
	if (ch == '\0')
	{
		return (src);
	}
	return (NULL);
}

int main (int argc, char **argv)
{
	if (argc > 2)
	{
		const void	*ar_1;
		int		ar_2;
		
		ar_1 = argv[1];
		ar_2 = atoi(argv[2]);

		printf("la vraie fonction : %s\n",strchr(argv[1], atoi(argv[2])));
		printf("ma fonction       :%s\n",ft_strchr(ar_1, ar_2));
	}
	return (0);
}
