/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrion <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 03:28:49 by pdrion            #+#    #+#             */
/*   Updated: 2019/11/15 22:47:55 by pdrion           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>


/* size_t ft_strlcpy(char *dst, const char *src, size_t dstsize) */
/* { */
/* 	char	ch; */
/* 	char	*src; */
/* 	char	*pos; */
/* 	int i; */

/* 	ch = (char)c; */
/* 	src = (char *)s; */
/* 	pos = NULL; */
/* 	i = 0; */
/* 	while(src[i] != '\0') */
/* 	{ */
/* 		if (src[i] == ch) */
/* 		{ */
/* 			pos = &src[i]; */
/* 		} */
/* 		i++; */
/* 	} */
/* 	if (ch == '\0') */
/* 	{ */
/* 		return (&src[i]); */
/* 	} */
/* 	return (pos); */
/* } */
#include "libft.h"
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

		printf("la taille est = %zu \n",strlen(ar_2));
		printf("la dest = %s \n",argv[1]);
		printf("ret V fct : %lu\n dest = %s \n\n",strlcpy(NULL, NULL, atoi(argv[3])),argv[1]);


//		printf("ma fonction       : %lu\n",ft_strlcpy(ar_1, ar_2, ar_3));
	}
	return (0);
}
