/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrion <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 01:23:40 by pdrion            #+#    #+#             */
/*   Updated: 2019/11/06 01:23:43 by pdrion           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int ft_isdigit(int c)
{
	unsigned char uc;

	uc = (unsigned char)c;
	if(uc >= '0' && uc <= '9')
		return (1);
	else
		return (0);
}

int main (int argc, char **argv)
{
	if (argc > 1)
	{
		printf("la vraie fonction ; %d\n",isdigit(atoi(argv[1])));
		printf("ma fonction       ; %d\n",ft_isdigit(atoi(argv[1])));
	}
	return (0);
}
