/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_isalnum.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lray <lray@student.42lausanne.ch >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 11:31:19 by lray              #+#    #+#             */
/*   Updated: 2023/09/07 11:33:05 by lray             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/test.h"

int	test_ft_isalnum(void)
{
	int	res;

	res = 1;
	if (ft_isalnum('0') != 1)
		res = 0;
	if (ft_isalnum('9') != 1)
		res = 0;
	if (ft_isalnum('a') != 1)
		res = 0;
	if (ft_isalnum('z') != 1)
		res = 0;
	if (ft_isalnum('A') != 1)
		res = 0;
	if (ft_isalnum('Z') != 1)
		res = 0;
	if (ft_isalnum(' ') != 0)
		res = 0;
	if (ft_isalnum('$') != 0)
		res = 0;
	if (res == 1)
		printf("\033[0;32m[OK]\033[0m\tft_isalnum()\n");
	else
		printf("\033[0;31m[KO]\033[0m\tft_isalnum()\n");
	return (res);
}
