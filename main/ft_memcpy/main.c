/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrion <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/15 18:38:41 by pdrion            #+#    #+#             */
/*   Updated: 2019/11/15 19:06:12 by pdrion           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libft.h"

int main(int argc, char **argv)
{
	if(argc >1)
	{
		printf("input %s\n", argv[1]);
		memcpy(argv[1],argv[2],atoi(argv[3]));
//		ft_memcpy(argv[1],argv[2],atoi(argv[3]));
//		ft_memcpy(argv[1],argv[2],atoi(argv[3]));
		printf("output %s\n", argv[1]);
		printf("le cas chelou %s\n", ft_memcpy(((void *)0), ((void *)0), 3));
	}
	return (0);
}
