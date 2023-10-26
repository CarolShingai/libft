/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshingai <cshingai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 16:24:51 by cshingai          #+#    #+#             */
/*   Updated: 2023/10/26 19:03:46 by cshingai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*t_string;
	char	*new_string;
	char	*new;
	size_t	index;
	size_t	last;

	index = 0;
	last = ft_strlen(s1) - 1;
	while (s1[index] && ft_strchr(set, s1[index]))
	{
		index++;
	}
	if (!s1)
		return (ft_strdup(""));
	t_string = ft_strchr(set, s1[index]);
	while (t_string[index] && ft_strrchr(set, t_string[last]))
	{
		last--;
	}
	new = ft_strrchr(set, t_string[last]);
	new_string = (char *) malloc (ft_strlen(new) * sizeof(char));
	new_string = ft_strdup(new);
	return(new_string);
}

int	main(void)
{
	char a[] = "--/asbha/---";
	char b[] = "-/a";
	printf("%s", ft_strtrim(a, b));
}