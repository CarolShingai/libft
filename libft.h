/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshingai <cshingai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 18:48:10 by cshingai          #+#    #+#             */
/*   Updated: 2023/10/20 14:02:30 by cshingai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>

void	ft_bzero(void *str, size_t n);
int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
void	*ft_memchr(void *str, int c, size_t n);
int		ft_memcmp(void *str1, void *str2, size_t n);
void	*ft_memcpy(void *dest, void *src, size_t n);
void	*ft_memmove(void *dest, void *src, size_t n);
void	*ft_memset(void *ptr, int n, size_t x);
void	ft_putstr(char *str);
char	*ft_strchr(char *str, int c);
char	*ft_strrchr(char *str, size_t n);
size_t	ft_strlcat(char *dest, char *src, size_t n);
size_t	ft_strlcpy(char *dest, char *src, size_t n);
int		ft_strlen(char *str);
int		ft_tolower(int c);
int		ft_toupper(int c);

#endif
