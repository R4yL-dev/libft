/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lray <lray@student.42lausanne.ch >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 00:25:08 by lray              #+#    #+#             */
/*   Updated: 2023/09/07 16:36:17 by lray             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stddef.h>

/**
 * @brief Fill a block of memory with zeros.
 *
 * @param s Pointer to the block of memory to fill.
 * @param n Number of bytes to be set to zero.
 * @return void
 */
void	ft_bzero(void *s, size_t n);

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
 * @brief Locate the first occurrence of a byte in a block of memory.
 *
 * @param s Pointer to the block of memory to search.
 * @param c Value to search for.
 * @param n Number of bytes to search.
 * @return void* Returns a pointer to the first occurrence of the byte `c` in the block of memory `s`, or NULL if the byte is not found.
 */
void	*ft_memchr(const void *s, int c, size_t n);

/**
 * @brief Copy a block of memory from source to destination.
 *
 * @param dest Pointer to the destination memory block.
 * @param src Pointer to the source memory block.
 * @param n Number of bytes to copy.
 * @return void* Returns a pointer to the destination memory block `dest`.
 */
void	*ft_memcpy(void *dest, const void *src, size_t n);

/**
 * @brief Copy a block of memory from source to destination, handling overlapping memory blocks.
 *
 * @param dest Pointer to the destination memory block.
 * @param src Pointer to the source memory block.
 * @param n Number of bytes to copy.
 * @return void* Returns a pointer to the destination memory block `dest`.
 */
void	*ft_memmove(void *dest, const void *src, size_t n);

/**
 * @brief Fill a block of memory with a specified value.
 *
 * @param s Pointer to the block of memory to fill.
 * @param c Value to be set.
 * @param n Number of bytes to be set to the value.
 * @return void* Returns a pointer to the memory block `s`.
 */
void	*ft_memset(void *s, int c, size_t n);

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
 * @brief Convert an uppercase letter to lowercase.
 *
 * @param c The character to convert.
 * @return int Returns the lowercase equivalent of the input character, or the input character if it is not an uppercase letter.
 */
int	ft_tolower(int c);

/**
 * @brief Convert a lowercase letter to uppercase.
 *
 * @param c The character to convert.
 * @return int Returns the uppercase equivalent of the input character, or the input character if it is not a lowercase letter.
 */
int	ft_toupper(int c);

#endif
