/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lray <lray@student.42lausanne.ch >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 00:25:08 by lray              #+#    #+#             */
/*   Updated: 2023/09/06 00:38:33 by lray             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stddef.h>

/**
 * @brief Calculates the length of a null-terminated string.
 *
 * @param s The string to calculate the length of.
 *
 * @return The length of the string, not including the null terminator character.
 *			If the input pointer is NULL, returns -1.
 */
size_t	ft_strlen(const char *s);
#endif
