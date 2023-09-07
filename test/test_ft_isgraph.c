/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_isgraph.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lray <lray@student.42lausanne.ch >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 12:44:35 by lray              #+#    #+#             */
/*   Updated: 2023/09/07 12:52:19 by lray             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/test.h"

int	test_ft_isgraph(void)
{
	int	res;

	res = 1;
	if (ft_isgraph('a') != 1)
		res = 0;
	if (ft_isgraph('Z') != 1)
		res = 0;
	if (ft_isgraph('0') != 1)
		res = 0;
	if (ft_isgraph('9') != 1)
		res = 0;
	if (ft_isgraph(' ') != 0)
		res = 0;
	if (ft_isgraph('\t') != 0)
		res = 0;
	if (ft_isgraph('\n') != 0)
		res = 0;
	if (ft_isgraph('\r') != 0)
		res = 0;
	if (ft_isgraph('\v') != 0)
		res = 0;
	if (ft_isgraph('\f') != 0)
		res = 0;
	if (res == 1)
		printf("\033[0;32m[OK]\033[0m\tft_isgraph()\n");
	else
		printf("\033[0;31m[KO]\033[0m\tft_isgraph()\n");
	return (res);
}
