/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrion <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 23:53:02 by pdrion            #+#    #+#             */
/*   Updated: 2019/11/15 21:17:41 by pdrion           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "libft.h"
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

//		printf("la vraie fonction ; %s\n",memchr(argv[1], atoi(argv[2]),atoi(argv[3])));
		printf("ma fonction ; %s\n",ft_memchr(((void *)0), '\0', 0x20));
		printf("la vraie fonction ; %s\n",memchr(((void *)0), '\0', 0x20));

//		printf("la vraie fonction ; %s\n",ft_memchr(ar_1, ar_2, ar_3));
	}
	return (0);
}
