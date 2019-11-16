/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrion <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 23:53:02 by pdrion            #+#    #+#             */
/*   Updated: 2019/11/06 00:31:37 by pdrion           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void *ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	uc;
	char			*src;
	
	uc = c;
	src = (char *)s;
	while(n-- && src != 0)
	{
		if (*src == uc)
			return(src);
		src++;
	}
	return (NULL);
}

int main (int argc, char **argv)
{
	if (argc > 3)
	{
		const void	*ar_1;
		int		ar_2;
		size_t	ar_3;
		
		ar_1 = argv[1];
		ar_2 = atoi(argv[2]);
		ar_3 = atoi(argv[3]);

		printf("la vraie fonction ; %s\n",memchr(argv[1], atoi(argv[2]),atoi(argv[3])));
		printf("la vraie fonction ; %s\n",ft_memchr(ar_1, ar_2, ar_3));
	}
	return (0);
}
