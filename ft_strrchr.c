/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshingai <cshingai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 17:21:10 by cshingai          #+#    #+#             */
/*   Updated: 2023/10/26 19:01:29 by cshingai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(char *str, size_t n)
{
	size_t	index;
	size_t	b;

	index = 0;
	b = ft_strlen(str) - 1;
	while (b + 1 != 0)
	{
		if (str[b] == (char) n)
			return (&str[b]);
		b--;
	}
	if (n == '\0')
	{
		return ((char *) &str[ft_strlen(str)]);
	}
	return (NULL);
}
