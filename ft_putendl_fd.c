/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshingai <cshingai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 15:47:58 by cshingai          #+#    #+#             */
/*   Updated: 2023/10/27 16:19:42 by cshingai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	while (*s)
		ft_putchar_fd(*s++, fd);
	ft_putchar_fd('\n', fd);
}

// int main(void)
// {
// 	char d[] = "luva";
// 	char a[] = "ovo";
// 	ft_putendl_fd(d, 1);
// 	ft_putendl_fd(a, 1);
// }