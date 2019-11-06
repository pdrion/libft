/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrion <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 01:39:45 by pdrion            #+#    #+#             */
/*   Updated: 2019/11/06 01:44:30 by pdrion           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int ft_isprint(int c)
{
	unsigned char uc;

	uc = (unsigned char)c;
	if(uc >= 32 && uc <= 126)
		return (1);
	else
		return (0);
}

int main (int argc, char **argv)
{
	if (argc > 1)
	{
		printf("la vraie fonction ; %d\n",isprint(atoi(argv[1])));
		printf("ma fonction       ; %d\n",ft_isprint(atoi(argv[1])));
	}
	return (0);
}
