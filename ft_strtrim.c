/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gargrigo <gargrigo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 17:38:25 by gargrigo          #+#    #+#             */
/*   Updated: 2026/02/09 17:38:26 by gargrigo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		begin_index;
	int		end_index;
	int		len;

	if (!s1 || !set)
		return (NULL);
	begin_index = 0;
	end_index = ft_strlen(s1) - 1;
	while (s1[begin_index] && ft_strchr(set, s1[begin_index]))
		begin_index++;
	while (end_index >= begin_index && ft_strchr(set, s1[end_index]))
		end_index--;
	len = end_index - begin_index + 1;
	if (len < 0)
		len = 0;
	return (ft_substr(s1, begin_index, len));
}
