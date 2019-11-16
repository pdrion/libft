/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrion <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 22:38:40 by pdrion            #+#    #+#             */
/*   Updated: 2019/11/15 20:44:43 by pdrion           ###   ########.fr       */
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
		void *ar_1;
		void *ar_2;
		size_t ar_3;
		
		ar_1 = argv[1];
		ar_2 = argv[2];
		ar_3 = atoi(argv[3]);

//		memmove(argv[1], argv[2],atoi(argv[3]));
		printf("la vraie fonction ; %s\n",memmove("sd", ((void *)0), 5));
//		printf("la vraie fonction ; %s\n",argv[1]);
//		ft_memmove(ar_1, ar_2, ar_3);
//		printf("ma fonction       ; %s\n",ar_1);
	}
	return (0);
}
