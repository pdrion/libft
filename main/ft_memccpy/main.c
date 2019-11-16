/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrion <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 16:30:29 by pdrion            #+#    #+#             */
/*   Updated: 2019/11/15 19:23:03 by pdrion           ###   ########.fr       */
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
			printf("%s\n",argv[1]);
//		memccpy(argv[1], argv[2],atoi(argv[3]),atoi(argv[4]));
		ft_memccpy(argv[1], argv[2],atoi(argv[3]),atoi(argv[4]));
			printf("%s\n",argv[1]);

	}
	return (0);
}
