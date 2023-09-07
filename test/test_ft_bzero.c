/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_bzero.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lray <lray@student.42lausanne.ch >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 15:40:22 by lray              #+#    #+#             */
/*   Updated: 2023/09/07 15:44:46 by lray             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/test.h"

int	test_ft_bzero(void)
{
	int		res;
	char	str[10];

	res = 1;
	ft_bzero(str, 10);
	if (memcmp(str, "\0\0\0\0\0\0\0\0\0\0", 10) != 0)
		res = 0;
	ft_bzero(str, 0);
	if (memcmp(str, "", 0) != 0)
		res = 0;
	ft_memset(str, 'A', 10);
	ft_bzero(str, 5);
	if (memcmp(str, "\0\0\0\0\0AAAAA", 10) != 0)
		res = 0;
	if (res == 1)
		printf("\033[0;32m[OK]\033[0m\tft_bzero()\n");
	else
		printf("\033[0;31m[KO]\033[0m\tft_bzero()\n");
	return(res);
}
