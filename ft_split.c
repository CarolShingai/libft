/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshingai <cshingai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 21:07:34 by cshingai          #+#    #+#             */
/*   Updated: 2023/11/03 21:29:12 by cshingai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	cont_words(const char *s, char sep)
{
	int nbr_word;

	nbr_word = 0;
	while (*s)
	{
		if (*s != sep && (*(s + 1) == sep || *(s + 1) == '\0'))
			nbr_word++;
		s++;
	}
	return (nbr_word);
}

int	words_len(char const *s, char sep)
{
	int i;

	i = 0;
	while(s[i] && s[i] != sep)
		i++;
	return (i);
}

void	ft_free_big_str(char **big_str, int size)
{
	int i;

	i = 0;
	while (i < size)
	{
		free(big_str[i]);
		i++;
	}
	free(big_str);
}

char	*ft_put_words(const char *s, char sep, char **big_str, int nbr_words)
{
	int		idx_s;
	int		idx_bs;

	idx_s = 0;
	idx_bs = 0;
	while (s[idx_s] && s[idx_s] != sep)
	{
		idx_s++;
	}
	if (s[idx_s] && s[idx_s] != sep)
		*big_str[idx_bs] = *ft_substr(*s, idx_s, words_len(&s, sep));
		idx_bs++;
	if (!**big_str)
		ft_free_big_str(**big_str, nbr_words);
		return (0);
	return(big_str);
}

char	**ft_split(char const *s, char c)
{
	char	**big_str;
	int		word_count;

	word_count = cont_words(s, c);
	if (!s)
		return (0);
	**big_str = (char *) malloc (sizeof(char) * (word_count + 1));
	if (!big_str)
		return (0);
	*big_str = ft_put_words(s, c, big_str, word_count);
	return(big_str);
}

int main(void)
{
	char *s = "   a   1551  a  ";
	printf("%s", *ft_split(s, ' '));
}
