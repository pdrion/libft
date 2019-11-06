/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdrion <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 01:47:10 by pdrion            #+#    #+#             */
/*   Updated: 2019/11/06 01:47:16 by pdrion           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isprint(int c)
{
	unsigned char uc;

	uc = (unsigned char)c;
	if(uc >= 32 && uc <= 126)
		return (1);
	else
		return (0);
}
