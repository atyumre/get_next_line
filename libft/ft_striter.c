/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atyumre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/15 08:20:39 by atyumre           #+#    #+#             */
/*   Updated: 2018/05/24 14:23:51 by atyumre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striter(char *s, void (*f)(char *))
{
	int iter;

	iter = 0;
	if (s != NULL && f != NULL)
		while (s[iter])
		{
			(*f)(&s[iter]);
			iter++;
		}
}
