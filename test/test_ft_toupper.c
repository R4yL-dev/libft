/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_toupper.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lray <lray@student.42lausanne.ch >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 14:47:13 by lray              #+#    #+#             */
/*   Updated: 2023/09/07 14:51:12 by lray             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/test.h"

int	test_ft_toupper(void)
{
	int	res;

	res = 1;
	if (ft_toupper('a') != 'A')
		res = 0;
	if (ft_toupper('z') != 'Z')
		res = 0;
	if (ft_toupper('A') != 'A')
		res = 0;
	if (ft_toupper('Z') != 'Z')
		res = 0;
	if (ft_toupper('0') != '0')
		res = 0;
	if (ft_toupper(' ') != ' ')
		res = 0;
	if (ft_toupper('\n') != '\n')
		res = 0;
	if (ft_toupper('\t') != '\t')
		res = 0;
	if (ft_toupper(127) != 127)
		res = 0;
	if (res == 1)
		printf("\033[0;32m[OK]\033[0m\tft_toupper()\n");
	else
		printf("\033[0;31m[KO]\033[0m\tft_toupper()\n");
	return (res);
}
