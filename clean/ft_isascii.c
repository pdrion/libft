/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrion <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 01:38:08 by pdrion            #+#    #+#             */
/*   Updated: 2019/11/06 01:38:14 by pdrion           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isascii(int c)
{
	unsigned char uc;

	uc = (unsigned char)c;
	if(uc >= 0 && uc <= 127)
		return (1);
	else
		return (0);
}
