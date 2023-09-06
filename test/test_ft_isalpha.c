/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_isalpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lray <lray@student.42lausanne.ch >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 00:50:54 by lray              #+#    #+#             */
/*   Updated: 2023/09/07 00:52:36 by lray             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/test.h"

int	test_ft_isalpha(void)
{
	int	res;

	res = 1;
	if (ft_isalpha('A') != 1)
		res = 0;
	if (ft_isalpha('Z') != 1)
		res = 0;
	if (ft_isalpha('a') != 1)
		res = 0;
	if (ft_isalpha('z') != 1)
		res = 0;
	if (ft_isalpha(' ') != 0)
		res = 0;
	if (ft_isalpha('0') != 0)
		res = 0;
	if (ft_isalpha('$') != 0)
		res = 0;
	if (res == 1)
		printf("\033[0;32m[OK]\033[0m\tft_isalpha()\n");
	else
		printf("\033[0;31m[KO]\033[0m\tft_isalpha()\n");
	return (res);
}
