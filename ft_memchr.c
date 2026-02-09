/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gargrigo <gargrigo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 17:37:30 by gargrigo          #+#    #+#             */
/*   Updated: 2026/02/09 17:37:32 by gargrigo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*p;
	unsigned char		q;
	size_t				i;

	if (n == 0)
		return (NULL);
	p = (const unsigned char *)s;
	q = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (p[i] == q)
			return ((void *)(p + i));
		i++;
	}
	return (NULL);
}
