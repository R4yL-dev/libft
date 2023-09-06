/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lray <lray@student.42lausanne.ch >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 00:25:08 by lray              #+#    #+#             */
/*   Updated: 2023/09/07 00:34:14 by lray             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stddef.h>

/**
 * @brief Check if a character is an uppercase letter.
 *
 * @param c The character to check.
 * @return int Returns 1 if the character is an uppercase letter, 0 otherwise.
 */
int	ft_isupper(int c);

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
