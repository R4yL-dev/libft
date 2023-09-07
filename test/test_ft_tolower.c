/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_tolower.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lray <lray@student.42lausanne.ch >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 14:55:16 by lray              #+#    #+#             */
/*   Updated: 2023/09/07 14:57:20 by lray             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/test.h"

int	test_ft_tolower(void)
{
	int	res;

	res = 1;
	if (ft_tolower('a') != 'a')
		res = 0;
	if (ft_tolower('z') != 'z')
		res = 0;
	if (ft_tolower('A') != 'a')
		res = 0;
	if (ft_tolower('Z') != 'z')
		res = 0;
	if (ft_tolower('0') != '0')
		res = 0;
	if (ft_tolower(' ') != ' ')
		res = 0;
	if (ft_tolower('\n') != '\n')
		res = 0;
	if (ft_tolower('\t') != '\t')
		res = 0;
	if (ft_tolower(127) != 127)
		res = 0;
	if (res == 1)
		printf("\033[0;32m[OK]\033[0m\tft_tolower()\n");
	else
		printf("\033[0;31m[KO]\033[0m\tft_tolower()\n");
	return (res);
}
