/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_memset.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lray <lray@student.42lausanne.ch >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 15:11:51 by lray              #+#    #+#             */
/*   Updated: 2023/09/07 15:34:42 by lray             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/test.h"

int	test_ft_memset(void)
{
	char	str[10];
	int		res;

	res = 1;
	ft_memset(str, 'A', 10);
	if (memcmp(str, "AAAAAAAAAA", 10) != 0)
		res = 0;
	ft_memset(str, 0, 10);
	if (memcmp(str, "\0\0\0\0\0\0\0\0\0\0", 10) != 0)
		res = 0;
	ft_memset(str, 1, 0);
	if (memcmp(str, "", 0) != 0)
		res = 0;
	ft_memset(str, 'B', 5);
	if (memcmp(str, "BBBBB\0\0\0\0", 10) != 0)
		res = 0;
	if (res == 1)
		printf("\033[0;32m[OK]\033[0m\tft_memset()\n");
	else
		printf("\033[0;31m[KO]\033[0m\tft_memset()\n");
	return (res);
}
