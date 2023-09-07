/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_isdigit.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lray <lray@student.42lausanne.ch >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 11:20:53 by lray              #+#    #+#             */
/*   Updated: 2023/09/07 11:26:00 by lray             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/test.h"

int	test_ft_isdigit(void)
{
	int	res;

	res = 1;
	if (ft_isdigit('0') != 1)
		res = 0;
	if (ft_isdigit('9') != 1)
		res = 0;
	if (ft_isdigit('a') != 0)
		res = 0;
	if (ft_isdigit('z') != 0)
		res = 0;
	if (ft_isdigit('A') != 0)
		res = 0;
	if (ft_isdigit('Z') != 0)
		res = 0;
	if (ft_isdigit(' ') != 0)
		res = 0;
	if (ft_isdigit('$') != 0)
		res = 0;
	if (res == 1)
		printf("\033[0;32m[OK]\033[0m\tft_isdigit()\n");
	else
		printf("\033[0;31m[KO]\033[0m\tft_isdigit()\n");
	return (res);
}
