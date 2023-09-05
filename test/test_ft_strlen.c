/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strlen.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lray <lray@student.42lausanne.ch >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 00:39:58 by lray              #+#    #+#             */
/*   Updated: 2023/09/06 00:40:46 by lray             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "../libft.h"

void	test_ft_strlen(const char *s)
{
	size_t	expected;
	size_t	result;

	expected = strlen(s);
	result = ft_strlen(s);
	if (result != expected)
		printf("FAIL: ft_strlen(\"%s\") = %zu, expected %zu\n", s, result, expected);
	else
		printf("PASS: ft_strlen(\"%s\") = %zu\n", s, result);
}

int		main(void)
{
	test_ft_strlen("");
	test_ft_strlen("Hello, world!");
	test_ft_strlen("Lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus.");
	test_ft_strlen("1234567890");
	test_ft_strlen("abcdefghijklmnopqrstuvwxyz");
	test_ft_strlen("ABCDEFGHIJKLMNOPQRSTUVWXYZ");
	test_ft_strlen(" !\"#$%&'()*+,-./:;<=>?@[\\]^_`{|}~");
	test_ft_strlen("This is a test string with some \0 null characters in it.");
	return (0);
}
