/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrion <philippedrion@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/23 16:19:03 by pdrion            #+#    #+#             */
/*   Updated: 2019/11/23 16:53:57 by pdrion           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
//#include "libft.h"
int	ft_atoi(const char *str);
int main(int argc, char **argv)
{
  if (argc > 1)
    {
      printf("la vrai fonction : %d \n", atoi(argv[1]));
      printf("ma fonction : %d \n", ft_atoi(argv[1]));

    }
  return (0);
}
