/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_isprint.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lray <lray@student.42lausanne.ch >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 11:53:54 by lray              #+#    #+#             */
/*   Updated: 2023/09/07 11:56:40 by lray             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/test.h"

int	test_ft_isprint(void)
{
	int	res;

	res = 1;
	if (ft_isprint(' ') != 1)
		res = 0;
	if (ft_isprint('a') != 1)
		res = 0;
	if (ft_isprint('Z') != 1)
		res = 0;
	if (ft_isprint('$') != 1)
		res = 0;
	if (ft_isprint('\n') != 0)
		res = 0;
	if (ft_isprint('\t') != 0)
		res = 0;
	if (ft_isprint('\r') != 0)
		res = 0;
	if (ft_isprint('\v') != 0)
		res = 0;
	if (ft_isprint('\f') != 0)
		res = 0;
	if (ft_isprint(0) != 0)
		res = 0;
	if (res == 1)
		printf("\033[0;32m[OK]\033[0m\tft_isprint()\n");
	else
		printf("\033[0;31m[KO]\033[0m\tft_isprint()\n");
	return (res);
}
