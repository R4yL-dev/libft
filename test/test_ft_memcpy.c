/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_memcpy.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lray <lray@student.42lausanne.ch >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 16:01:49 by lray              #+#    #+#             */
/*   Updated: 2023/09/07 16:10:00 by lray             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/test.h"

int	test_ft_memcpy(void)
{
	int		res;
	char	src[10] = "1234567890";
	char	dest[10];

	res = 1;
	ft_memcpy(dest, src, 10);
	if (memcmp(dest, "1234567890", 10) != 0)
		res = 0;
	ft_memcpy(dest, src, 5);
	if (memcmp(dest, "12345", 5) != 0)
		res = 0;
	ft_memcpy(dest, src + 5, 5);
	if (memcmp(dest, "67890", 5) != 0)
		res = 0;
	ft_memcpy(dest, src, 0);
	if (memcmp(dest, "", 0) != 0)
		res = 0;
	if (res == 1)
		printf("\033[0;32m[OK]\033[0m\tft_memcpy()\n");
	else
		printf("\033[0;31m[KO]\033[0m\tft_memcpy()\n");
	return(res);
}
