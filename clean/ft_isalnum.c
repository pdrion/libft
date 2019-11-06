/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrion <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 01:30:37 by pdrion            #+#    #+#             */
/*   Updated: 2019/11/06 01:30:47 by pdrion           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isalnum(int c)
{
	unsigned char uc;

	uc = (unsigned char)c;
	if((uc >= 'A' && uc <= 'Z') || (uc >= 'a' && uc <='z') || (uc >= '0' && uc <= '9'))
		return (1);
	else
		return (0);
}
