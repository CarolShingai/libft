/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshingai <cshingai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 14:03:41 by cshingai          #+#    #+#             */
/*   Updated: 2023/10/20 14:48:23 by cshingai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlen(char *c);

void	*ft_memmove(void *dest, void *src, size_t n)
{
	size_t	i;
	char	*temp_src;
	char	*char_dest = (char *) dest;
	// char *char_src = temp_src;

	i = 0;
	char_dest = dest;
	temp_src = (char *) src;
	while (i < n)
	{
		char_dest[i] = temp_src[i];
		i++;
	}
	return (dest);
}