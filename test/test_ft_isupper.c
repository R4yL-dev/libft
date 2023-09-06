/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_isupper.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lray <lray@student.42lausanne.ch >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 00:30:58 by lray              #+#    #+#             */
/*   Updated: 2023/09/07 00:38:07 by lray             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/test.h"

int	test_ft_isupper(void)
{
	int	res;

	res = 1;
	if (ft_isupper('A') != 1)
		res = 0;
	if (ft_isupper('Z') != 1)
		res = 0;
	if (ft_isupper('a') != 0)
		res = 0;
	if (ft_isupper('z') != 0)
		res = 0;
	if (ft_isupper(' ') != 0)
		res = 0;
	if (ft_isupper('0') != 0)
		res = 0;
	if (ft_isupper('$') != 0)
		res = 0;
	if (res == 1)
		printf("\033[0;32m[OK]\033[0m\tft_isupper()\n");
	else
		printf("\033[0;31m[KO]\033[0m\tft_isupper()\n");
	return (res);
}
