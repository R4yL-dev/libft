/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_isspace.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lray <lray@student.42lausanne.ch >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 13:16:04 by lray              #+#    #+#             */
/*   Updated: 2023/09/07 13:18:27 by lray             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/test.h"

int	test_ft_isspace(void)
{
	int	res;

	res = 1;
	if (ft_isspace(' ') != 1)
		res = 0;
	if (ft_isspace('\t') != 1)
		res = 0;
	if (ft_isspace('\n') != 1)
		res = 0;
	if (ft_isspace('\r') != 1)
		res = 0;
	if (ft_isspace('\v') != 1)
		res = 0;
	if (ft_isspace('\f') != 1)
		res = 0;
	if (ft_isspace('0') != 0)
		res = 0;
	if (ft_isspace('A') != 0)
		res = 0;
	if (ft_isspace('z') != 0)
		res = 0;
	if (ft_isspace(127) != 0)
		res = 0;
	if (res == 1)
		printf("\033[0;32m[OK]\033[0m\tft_isspace()\n");
	else
		printf("\033[0;31m[KO]\033[0m\tft_isspace()\n");
	return (res);
}
