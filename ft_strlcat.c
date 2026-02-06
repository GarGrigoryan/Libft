/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gargrigo <gargrigo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/06 16:57:04 by gargrigo          #+#    #+#             */
/*   Updated: 2026/02/06 17:05:48 by gargrigo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t			dst_length;
	size_t			src_length;
	size_t			i;

	dst_length = 0;
	while (dst_length < size && dst[dst_length])
		dst_length++;
	src_length = ft_strlen(src);
	if (dst_length == size)
		return (size + src_length);
	i = 0;
	while (src[i] && dst_length + i < size - 1)
	{
		dst[dst_length + i] = src[i];
		i++;
	}
	if (dst_length + i < size)
		dst[dst_length + i] = '\0';
	return (dst_length + src_length);
}
