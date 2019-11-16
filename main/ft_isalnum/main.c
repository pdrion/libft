/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrion <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 01:26:15 by pdrion            #+#    #+#             */
/*   Updated: 2019/11/06 01:34:02 by pdrion           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int ft_isascii(int c)
{
	unsigned char uc;

	uc = (unsigned char)c;
	if(uc >= 0 && uc <= 177)
		return (1);
	else
		return (0);
}

int main (int argc, char **argv)
{
	if (argc > 1)
	{
		printf("la vraie fonction ; %d\n",isascii(atoi(argv[1])));
		printf("ma fonction       ; %d\n",ft_isascii(atoi(argv[1])));
	}
	return (0);
}
