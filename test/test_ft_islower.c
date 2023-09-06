/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_islower.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lray <lray@student.42lausanne.ch >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 00:44:24 by lray              #+#    #+#             */
/*   Updated: 2023/09/07 00:46:26 by lray             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/test.h"

int	test_ft_islower(void)
{
	int	res;

	res = 1;
	if (ft_islower('A') != 0)
		res = 0;
	if (ft_islower('Z') != 0)
		res = 0;
	if (ft_islower('a') != 1)
		res = 0;
	if (ft_islower('z') != 1)
		res = 0;
	if (ft_islower(' ') != 0)
		res = 0;
	if (ft_islower('0') != 0)
		res = 0;
	if (ft_islower('$') != 0)
		res = 0;
	if (res == 1)
		printf("\033[0;32m[OK]\033[0m\tft_islower()\n");
	else
		printf("\033[0;31m[KO]\033[0m\tft_islower()\n");
	return (res);
}
