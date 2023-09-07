/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lray <lray@student.42lausanne.ch >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 00:25:08 by lray              #+#    #+#             */
/*   Updated: 2023/09/07 14:38:10 by lray             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stddef.h>

/**
 * @brief Check if a character is alphanumeric.
 *
 * @param c The character to check.
 * @return int Returns 1 if the character is alphanumeric, 0 otherwise.
 */
int	ft_isalnum(int c);

/**
 * @brief Check if a character is an alphabetic character.
 *
 * @param c The character to check.
 * @return int Returns 1 if the character is an alphabetic character, 0 otherwise.
 */
int	ft_isalpha(int c);

/**
 * @brief Check if a character is a blank character (space or tab).
 *
 * @param c The character to check.
 * @return int Returns 1 if the character is a blank character, 0 otherwise.
 */
int	ft_isblank(int c);

/**
 * @brief Check if a character is a control character.
 *
 * @param c The character to check.
 * @return int Returns 1 if the character is a control character, 0 otherwise.
 */
int	ft_iscntrl(int c);

/**
 * @brief Check if a character is a digit.
 *
 * @param c The character to check.
 * @return int Returns 1 if the character is a digit, 0 otherwise.
 */
int	ft_isdigit(int c);

/**
 * @brief Check if a character is a printable character other than a space.
 *
 * @param c The character to check.
 * @return int Returns 1 if the character is a printable character other than a space, 0 otherwise.
 */
int	ft_isgraph(int c);

/**
 * @brief Check if a character is a lowercase letter.
 *
 * @param c The character to check.
 * @return int Returns 1 if the character is a lowercase letter, 0 otherwise.
 */
int	ft_islower(int c);

/**
 * @brief Check if a character is printable.
 *
 * @param c The character to check.
 * @return int Returns 1 if the character is printable, 0 otherwise.
 */
int	ft_isprint(int c);

/**
 * @brief Check if a character is a punctuation character.
 *
 * @param c The character to check.
 * @return int Returns 1 if the character is a punctuation character, 0 otherwise.
 */
int	ft_ispunct(int c);

/**
 * @brief Check if a character is a whitespace character.
 *
 * @param c The character to check.
 * @return int Returns 1 if the character is a whitespace character, 0 otherwise.
 */
int	ft_isspace(int c);

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

/**
 * @brief Convert a lowercase letter to uppercase.
 *
 * @param c The character to convert.
 * @return int Returns the uppercase equivalent of the input character, or the input character if it is not a lowercase letter.
 */
int	ft_toupper(int c);

#endif
