/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gargrigo <gargrigo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 19:03:57 by gargrigo          #+#    #+#             */
/*   Updated: 2026/01/30 19:24:41 by gargrigo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t			i;
	int				j;
	int				little_len;

	if (!*little)
		return ((char *)big);
	i = 0;
	j = 0;
	little_len = ft_strlen(little);
	while (big[i] && i < len)
	{
		j = 0;
		while (i + j < len && big[i + j] && big[i + j] == little[j])
		{
			j++;
			if (j == little_len)
				return ((char *)(big + i));
		}
		i++;
	}
	return (0);
}
