/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rteoh <rteoh@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 17:27:29 by rteoh             #+#    #+#             */
/*   Updated: 2025/01/26 17:27:29 by rteoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(const char *p1, const char *p2)
{
	const unsigned char	*s1;
	const unsigned char	*s2;

	s1 = (const unsigned char *)p1;
	s2 = (const unsigned char *)p2;
	while (*s1 == *s2
		&& *s1 != '\0'
		&& *s2 != '\0')
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
