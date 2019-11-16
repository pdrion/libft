/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrion <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 02:01:49 by pdrion            #+#    #+#             */
/*   Updated: 2019/11/06 02:08:56 by pdrion           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int ft_toupper(int c)
{
	unsigned char uc;

	uc = (unsigned char)c;
	if (uc >= 'a' && uc <='z')
		return (c - 32);
	return (c);
}

int main (int argc, char **argv)
{
	if (argc > 1)
	{
		printf("la vraie fonction ; %d\n",toupper(atoi(argv[1])));
		printf("ma fonction       ; %d\n",ft_toupper(atoi(argv[1])));
	}
	return (0);
}
