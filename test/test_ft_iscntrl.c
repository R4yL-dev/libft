/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_iscntrl.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lray <lray@student.42lausanne.ch >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 12:32:37 by lray              #+#    #+#             */
/*   Updated: 2023/09/07 12:35:58 by lray             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/test.h"

int	test_ft_iscntrl(void)
{
	int	res;

	res = 1;
	if (ft_iscntrl('\0') != 1)
		res = 0;
	if (ft_iscntrl('\n') != 1)
		res = 0;
	if (ft_iscntrl('\t') != 1)
		res = 0;
	if (ft_iscntrl('\r') != 1)
		res = 0;
	if (ft_iscntrl('\v') != 1)
		res = 0;
	if (ft_iscntrl('\f') != 1)
		res = 0;
	if (ft_iscntrl(' ') != 0)
		res = 0;
	if (ft_iscntrl('a') != 0)
		res = 0;
	if (ft_iscntrl('Z') != 0)
		res = 0;
	if (ft_iscntrl('$') != 0)
		res = 0;
	if (ft_iscntrl(127) != 1)
		res = 0;
	if (ft_iscntrl(128) != 0)
		res = 0;
	if (res == 1)
		printf("\033[0;32m[OK]\033[0m\tft_iscntrl()\n");
	else
		printf("\033[0;31m[KO]\033[0m\tft_iscntrl()\n");
	return (res);
}
