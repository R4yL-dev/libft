/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lray <lray@student.42lausanne.ch >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 16:13:54 by lray              #+#    #+#             */
/*   Updated: 2023/09/07 16:18:45 by lray             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*dest_ptr;
	unsigned char	*src_ptr;

	dest_ptr = (unsigned char *)dest;
	src_ptr = (unsigned char *)src;
	if (dest_ptr < src_ptr)
	{
		while (n)
		{
			*dest_ptr++ = *src_ptr++;
			--n;
		}
	}
	else
	{
		dest_ptr += n - 1;
		src_ptr += n - 1;
		while (n)
		{
			*dest_ptr-- = *src_ptr--;
			--n;
		}
	}
	return (dest);
}
