/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_memmove.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lray <lray@student.42lausanne.ch >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 16:20:16 by lray              #+#    #+#             */
/*   Updated: 2023/09/07 16:31:23 by lray             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/test.h"

int	test_ft_memmove(void)
{
	int	res;
	char	src[10] = "1234567890";
	char	dest[10];

	res = 1;
	ft_memmove(dest, src, 10);
	if (memcmp(dest, "1234567890", 10) != 0)
		res = 0;
	ft_bzero(dest, 10);
	ft_memmove(dest, src, 5);
	if (memcmp(dest, "12345\0\0\0\0", 10) != 0)
		res = 0;
	ft_memmove(dest + 5, dest, 5);
	if (memcmp(dest, "1234512345", 10) != 0)
		res = 0;
	ft_memmove(dest, dest + 5, 5);
	if (memcmp(dest, "1234512345", 10) != 0)
		res = 0;
	ft_memmove(dest, src, 0);
	if (memcmp(dest, "", 0) != 0)
		res = 0;
	if (res == 1)
		printf("\033[0;32m[OK]\033[0m\tft_memmove()\n");
	else
		printf("\033[0;31m[KO]\033[0m\tft_memmove()\n");
	return(res);
}
