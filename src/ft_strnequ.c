/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pchartie <pchartie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/13 14:16:26 by pchartie          #+#    #+#             */
/*   Updated: 2016/10/23 16:45:35 by pchartie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	size_t				i;
	unsigned const char *c1;
	unsigned const char *c2;

	i = 0;
	c1 = (unsigned const char *)s1;
	c2 = (unsigned const char *)s2;
	if (!c1 && !c2)
		return (1);
	while (c1[i] && c2[i] && i < n)
	{
		if (c1[i] != c2[i])
			return (0);
		i++;
	}
	if (i != n && c1[i] != c2[i])
		return (0);
	return (1);
}
