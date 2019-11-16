/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrion <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 03:28:49 by pdrion            #+#    #+#             */
/*   Updated: 2019/11/16 00:19:02 by pdrion           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
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
		printf("la dest = %s \n",ar_1);
		strlcat(ar_1, ar_2, ar_3);
		printf("dest = %s \n\n", ar_1);
		printf("la taille max = %zu \n", strlen("the cake is a lie !\0I'm hidden lol\r\n") + strlen("there is no stars in the sky"));
		printf("la taille max = %zu \n", strlen("there is no stars in the skythe cake is a lie "));


//		printf("ma fonction       : %lu\n",ft_strlcpy(ar_1, ar_2, ar_3));
	}
	return (0);
}
