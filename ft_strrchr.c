/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gargrigo <gargrigo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/06 16:56:31 by gargrigo          #+#    #+#             */
/*   Updated: 2026/02/12 13:05:32 by gargrigo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strrchr(const char *s, int c)
{
	char			*last;
	unsigned char	uc;

	uc = (unsigned char)c;
	last = NULL;
	while (*s)
	{
		if (*s == uc)
			last = (char *)s;
		s++;
	}
	if (*s == uc)
		return ((char *)s);
	return (last);
}
