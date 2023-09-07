/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_isblank.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lray <lray@student.42lausanne.ch >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 12:15:51 by lray              #+#    #+#             */
/*   Updated: 2023/09/07 12:20:13 by lray             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/test.h"

int	test_ft_isblank(void)
{
	int	res;

	res = 1;
	if (ft_isblank(' ') != 1)
		res = 0;
	if (ft_isblank('\t') != 1)
		res = 0;
	if (ft_isblank('\f') != 0)
		res = 0;
	if (ft_isblank('\n') != 0)
		res = 0;
	if (ft_isblank('\r') != 0)
		res = 0;
	if (ft_isblank('4') != 0)
		res = 0;
	if (ft_isblank('Z') != 0)
		res = 0;
	if (res == 1)
		printf("\033[0;32m[OK]\033[0m\tft_isblank()\n");
	else
		printf("\033[0;31m[KO]\033[0m\tft_isblank()\n");
	return (res);
}
