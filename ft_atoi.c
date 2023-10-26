/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshingai <cshingai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 17:42:19 by cshingai          #+#    #+#             */
/*   Updated: 2023/10/25 17:18:13 by cshingai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	index;
	int	sign;
	int	number;

	index = 0;
	number = 0;
	sign = 1;
	while (str[index] == ' ' || (str[index] >= 9 && str[index] <= 13))
		index++;
	if (str[index] == '-')
	{
		sign *= -1;
		index++;
	}
	else if (str[index] == '+')
		index++;
	while (str[index] && (str[index] >= '0' && str[index] <= '9'))
	{
		number = (number * 10) + (str[index] - '0');
		index++;
	}
	return (number * sign);
}

// int main() {
//     char str1[] = "12345";
//     char str2[] = "-6789";
//     char str3[] = "  42 is a great number";

//     int num1 = ft_atoi(str1);
//     int num2 = ft_atoi(str2);
//     int num3 = ft_atoi(str3);

//     printf("String 1: %d\n", num1);
//     printf("String 2: %d\n", num2);
//     printf("String 3: %d\n", num3);

//     return 0;
// }
