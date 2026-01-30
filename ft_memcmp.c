/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gargrigo <gargrigo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 18:45:16 by gargrigo          #+#    #+#             */
/*   Updated: 2026/01/30 18:55:38 by gargrigo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char		*s_one;
	const unsigned char		*s_two;
	size_t					i;

	if (n == 0)
		return (0);
	s_one = (const unsigned char *)s1;
	s_two = (const unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (s_one[i] != s_two[i])
			return (s_one[i] - s_two[i]);
		i++;
	}
	return (0);
}
