/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iscntrl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lray <lray@student.42lausanne.ch >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 12:29:59 by lray              #+#    #+#             */
/*   Updated: 2023/09/07 12:31:26 by lray             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

int	ft_iscntrl(int c)
{
	if (c >= 0 && c <= 31)
		return (1);
	else if (c == 127)
		return (1);
	else
		return (0);
}
