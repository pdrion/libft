/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrion <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 22:38:40 by pdrion            #+#    #+#             */
/*   Updated: 2019/11/05 23:49:31 by pdrion           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void *ft_memmove(void *dst, const void *src, size_t n)
{
	size_t		i;
	char		*d;
	char		*s;
	
	i = 0;
	d = dst;
	s = (char *)src;
	if (d[n - 1] && n != 0)
	{
		while (i < n)
		{
			*d++ = s[i];
			i++;
		}
	}
	else if (n != 0)
	{
		while (*d != 0)
			*d++ = s[i++];
		i = 0;
		while (s[i])
			*++d = s[i++];
	}
	return (dst);
}

int main (int argc, char **argv)
{
	if (argc > 3)
	{
		void *ar_1;
		void *ar_2;
		size_t ar_3;
		
		ar_1 = argv[1];
		ar_2 = argv[2];
		ar_3 = atoi(argv[3]);

		memmove(argv[1], argv[2],atoi(argv[3]));
		printf("la vraie fonction ; %s\n",argv[1]);
		ft_memmove(ar_1, ar_2, ar_3);
		printf("ma fonction       ; %s\n",ar_1);
	}
	return (0);
}
