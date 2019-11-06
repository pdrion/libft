/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrion <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 01:04:27 by pdrion            #+#    #+#             */
/*   Updated: 2019/11/06 01:10:08 by pdrion           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

size_t ft_strlen(const char *s)
{
	size_t i;

	i = 0;
	while(s[++i] != '\0')
	{}
	return (i);
}

int main (int argc, char **argv)
{
	if (argc > 1)
	{
		printf("la vraie fonction ; %lu\n",strlen(argv[1]));
		printf("ma fonction       ; %lu\n",ft_strlen(argv[1]));
	}
	return (0);
}
