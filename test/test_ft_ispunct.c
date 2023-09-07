/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_ispunct.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lray <lray@student.42lausanne.ch >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 12:57:10 by lray              #+#    #+#             */
/*   Updated: 2023/09/07 13:04:54 by lray             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/test.h"

int	test_ft_ispunct(void)
{
	int	res;

	res = 1;
	if (ft_ispunct('.') != 1)
		res = 0;
	if (ft_ispunct(',') != 1)
		res = 0;
	if (ft_ispunct(';') != 1)
		res = 0;
	if (ft_ispunct(':') != 1)
		res = 0;
	if (ft_ispunct('?') != 1)
		res = 0;
	if (ft_ispunct('!') != 1)
		res = 0;
	if (ft_ispunct('(') != 1)
		res = 0;
	if (ft_ispunct(')') != 1)
		res = 0;
	if (ft_ispunct('[') != 1)
		res = 0;
	if (ft_ispunct(']') != 1)
		res = 0;
	if (ft_ispunct('{') != 1)
		res = 0;
	if (ft_ispunct('}') != 1)
		res = 0;
	if (ft_ispunct('@') != 1)
		res = 0;
	if (ft_ispunct('#') != 1)
		res = 0;
	if (ft_ispunct('$') != 1)
		res = 0;
	if (ft_ispunct('%') != 1)
		res = 0;
	if (ft_ispunct('^') != 1)
		res = 0;
	if (ft_ispunct('&') != 1)
		res = 0;
	if (ft_ispunct('*') != 1)
		res = 0;
	if (ft_ispunct('-') != 1)
		res = 0;
	if (ft_ispunct('+') != 1)
		res = 0;
	if (ft_ispunct('=') != 1)
		res = 0;
	if (ft_ispunct('/') != 1)
		res = 0;
	if (ft_ispunct('\\') != 1)
		res = 0;
	if (ft_ispunct('|') != 1)
		res = 0;
	if (ft_ispunct('~') != 1)
		res = 0;
	if (ft_ispunct('`') != 1)
		res = 0;
	if (ft_ispunct('"') != 1)
		res = 0;
	if (ft_ispunct('\'') != 1)
		res = 0;
	if (ft_ispunct(0) != 0)
		res = 0;
	if (ft_ispunct(' ') != 0)
		res = 0;
	if (ft_ispunct('0') != 0)
		res = 0;
	if (ft_ispunct('A') != 0)
		res = 0;
	if (ft_ispunct('z') != 0)
		res = 0;
	if (ft_ispunct(127) != 0)
		res = 0;
	if (res == 1)
		printf("\033[0;32m[OK]\033[0m\tft_ispunct()\n");
	else
		printf("\033[0;31m[KO]\033[0m\tft_ispunct()\n");
	return (res);
}
