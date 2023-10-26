/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshingai <cshingai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 15:26:50 by cshingai          #+#    #+#             */
/*   Updated: 2023/10/25 17:34:34 by cshingai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(void *str, int c, size_t n)
{
	size_t	i;
	char	char_c;
	char	*char_str;

	i = 0;
	char_c = c;
	char_str = (char *) str;
	while (i < n)
	{
		if (char_str[i] == char_c)
			return (&char_str[i]);
		i++;
	}
	if (!c)
		return (str);
	return (NULL);
}
