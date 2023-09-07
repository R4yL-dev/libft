/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_memcmp.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lray <lray@student.42lausanne.ch >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 17:06:02 by lray              #+#    #+#             */
/*   Updated: 2023/09/07 17:14:34 by lray             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/test.h"

int	test_ft_memcmp(void)
{
	int		res;
	char	str1[] = "Hello, world!";
	char	str2[] = "Hello, world!";
	char	str3[] = "Hello, world";
	char	str4[] = "Hello, World!";

	res = 1;
	if (ft_memcmp(str1, str2, 13) != 0)
		res = 0;
	if (ft_memcmp(str1, str3, 13) < 0)
		res = 0;
	if (ft_memcmp(str4, str1, 13) > 0)
		res = 0;
	if (ft_memcmp(str1, str2, 5) != 0)
		res = 0;
	if (ft_memcmp(str1, str2, 0) != 0)
		res = 0;
	if (res == 1)
		printf("\033[0;32m[OK]\033[0m\tft_memcmp()\n");
	else
		printf("\033[0;31m[KO]\033[0m\tft_memcmp()\n");
	return(res);
}
