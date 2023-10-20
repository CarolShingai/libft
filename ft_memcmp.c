/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshingai <cshingai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 13:58:25 by cshingai          #+#    #+#             */
/*   Updated: 2023/10/20 12:38:26 by cshingai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(void *str1, void *str2, size_t n)
{
	size_t	index;
	char	*char_str1;
	char	*char_str2;

	index = 0;
	char_str1 = str1;
	char_str2 = str2;
	while ((char_str1[index] || char_str2) && index < n)
	{
		if (char_str1[index] == char_str2[index])
			index++;
		else
			return (char_str1[index] - char_str2[index]);
	}
	return (0);
}
