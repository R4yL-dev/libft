/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strlen.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lray <lray@student.42lausanne.ch >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 00:39:58 by lray              #+#    #+#             */
/*   Updated: 2023/09/07 00:32:29 by lray             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/test.h"

static int	test_run(const char *s);

int	test_ft_strlen(void)
{
	int	res;

	res = 1;
	if (!test_run(""))
		res = 0;
	if (!test_run("Hello, world!"))
		res = 0;
	if (!test_run("Lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus."))
		res = 0;
	if (!test_run("1234567890"))
		res = 0;
	if (!test_run("abcdefghijklmnopqrstuvwxyz"))
		res = 0;
	if (!test_run("ABCDEFGHIJKLMNOPQRSTUVWXYZ"))
		res = 0;
	if (!test_run(" !\"#$%&'()*+,-./:;<=>?@[\\]^_`{|}~"))
		res = 0;
	if (!test_run("This is a test string with some \0 null characters in it."))
		res = 0;
	if (res == 1)
		printf("\033[0;32m[OK]\033[0m\tft_strlen()\n");
	else
		printf("\033[0;31m[KO]\033[0m\tft_strlen()\n");
	return (res);
}

static int	test_run(const char *s)
{
	size_t	expected;
	size_t	result;

	expected = strlen(s);
	result = ft_strlen(s);
	if (result != expected)
		return (0);
	else
		return (1);
}
