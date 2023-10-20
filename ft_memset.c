/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshingai <cshingai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 14:27:55 by cshingai          #+#    #+#             */
/*   Updated: 2023/10/20 14:08:02 by cshingai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int n, size_t x)
{
	size_t	index;
	char	*char_ptr;

	char_ptr = (char *) ptr;
	index = 0;
	while (&ptr[index] && index < x)
	{
		char_ptr[index] = (char)n;
		index++;
	}
	return (ptr);
}
