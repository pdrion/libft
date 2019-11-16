/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrion <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 03:28:49 by pdrion            #+#    #+#             */
/*   Updated: 2019/11/06 03:57:15 by pdrion           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

size_t ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	char	ch;
	char	*src;
	char	*pos;
	int i;

	ch = (char)c;
	src = (char *)s;
	pos = NULL;
	i = 0;
	while(src[i] != '\0')
	{
		if (src[i] == ch)
		{
			pos = &src[i];
		}
		i++;
	}
	if (ch == '\0')
	{
		return (&src[i]);
	}
	return (pos);
}

int main (int argc, char **argv)
{
	if (argc > 2)
	{
		char	*ar_1;
		const char	*ar_2;
		size_t		ar_3;
		
		ar_1 = argv[1];
		ar_2 = argv[2];
		ar_3 = atoi(argv[3]);
		printf("la dest = %s \n",argv[1]);
		printf("ret V fct : %lu\n dest = %s \n\n",strlcpy(argv[1], argv[2], atoi(argv[3])), argv[1]);
//		printf("ma fonction       : %lu\n",ft_strlcpy(ar_1, ar_2, ar_3));
	}
	return (0);
}
