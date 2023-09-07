/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_memchr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lray <lray@student.42lausanne.ch >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 16:36:46 by lray              #+#    #+#             */
/*   Updated: 2023/09/07 16:54:33 by lray             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/test.h"

int	test_ft_memchr(void)
{
	int		res;
	char	str[] = "Hello, world!";
	char	*ptr;

	res = 1;
	ptr = ft_memchr(str, 'o', 13);
	if (ptr != str + 4)
		res = 0;
	ptr = ft_memchr(str, 'o', 4);
	if (ptr != NULL)
		res = 0;
	ptr = ft_memchr(str, '!', 13);
	if (ptr != str + 12)
		res = 0;
	ptr = ft_memchr(str, '\0', 14);
	if (ptr != str + 13)
		res = 0;
	ptr = ft_memchr(str, 'H', 0);
	if (ptr != NULL)
		res = 0;
	if (res == 1)
		printf("\033[0;32m[OK]\033[0m\tft_memchr()\n");
	else
		printf("\033[0;31m[KO]\033[0m\tft_memchr()\n");
	return(res);
}
