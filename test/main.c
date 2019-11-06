/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrion <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 14:03:12 by pdrion            #+#    #+#             */
/*   Updated: 2019/11/04 15:03:27 by pdrion           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void ft_bzero(void *s, size_t n);

int main(int argc, char **argv)
{
	if (argc > 1)
	{
		char arr[] = "testdememset";
		int c;
		int len;
		int i;
		
		i = 0;
		c = atoi(argv[1]);
		len = 3;

		bzero(arr, len);
//		memset(arr, c, len);
			printf("%s", arr);
	}
	return (0);

}
