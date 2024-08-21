/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strend.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rteoh <rteoh@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 14:19:58 by rteoh             #+#    #+#             */
/*   Updated: 2024/07/20 14:37:09 by rteoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strend(char *s, char *suffix)
{
	size_t	s_len;
	size_t	suffix_len;

	s_len = ft_strlen(s);
	suffix_len = ft_strlen(suffix);
	if (suffix_len > s_len)
		return (0);
	while (suffix_len > 0)
	{
		if (suffix[suffix_len] != s[s_len])
			return (0);
		suffix_len--;
		s_len--;
	}
	return (!(suffix_len));
}
