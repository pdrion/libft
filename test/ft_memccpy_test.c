/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrion <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 16:30:29 by pdrion            #+#    #+#             */
/*   Updated: 2019/11/05 21:55:32 by pdrion           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void *ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t		i;
	char		*d;
	char		*s;
	
	i = 0;
	d = dst;
	s = (char *)src;
	while (i < n && (i == 0 || s[i - 1] != c))
	{
		d[i] = s[i];
		i++;
	}
	if (i > 0 && s[i - 1] == c)
		return (d + i);
	else
		return (NULL);
}

/* void *ft_memccpy(void *dst, const void *src, int c, size_t n) */
/* { */
/* 	unsigned char	uc; */
/* 	char			*d; */
/* 	const char		*s; */
/* 	int				i; */

/* 	i = 0; */
/* 	d = dst; */
/* 	s = src; */
/* 	uc = (unsigned char)c; */
/* 	printf("%c\n", uc); */
/* 	while(i < n && s[i] != uc && s[i] != NULL) */
/* 	{ */
/* 		d[i] = s[i]; */
/* 		i++; */
/* 	} */
/* 	if (s[i] == (void)uc) */
/* 		d[i] = s[i]; */
/* 	return (dst); */
	
/* } */
/*void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	uc;
	char			*d;
	const char		*s;
	size_t			i;

	i = 0;
	d = dst;
	s = src;
	uc = (unsigned char)c;
	while (i < n && s[i] != uc && s[i] != '\0')
	{
		d[i] = s[i];
		i++;
	}
	if (s[i] == uc)
		d[i] = s[i];
	else if (s[i] == '\0' && i != n + 1)
		d[i] = '\0';
	return (dst);
	}*/
int main (int argc, char **argv)
{
	if (argc > 3)
	{
//		memccpy(argv[1], argv[2],atoi(argv[3]),atoi(argv[4]));
		ft_memccpy(argv[1], argv[2],atoi(argv[3]),atoi(argv[4]));
			printf("%s\n",argv[1]);
	}
	return (0);
}
