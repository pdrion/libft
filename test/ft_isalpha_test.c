/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrion <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 01:12:24 by pdrion            #+#    #+#             */
/*   Updated: 2019/11/06 01:20:32 by pdrion           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int ft_isalpha(int c)
{
	unsigned char uc;

	uc = (unsigned char)c;
	if((uc >= 'A' && uc <= 'Z') || (uc >= 'a' && uc <='z'))
		return (1);
	else
		return (0);
}

int main (int argc, char **argv)
{
	if (argc > 1)
	{
		printf("la vraie fonction ; %d\n",isalpha(atoi(argv[1])));
		printf("ma fonction       ; %d\n",ft_isalpha(atoi(argv[1])));
	}
	return (0);
}
