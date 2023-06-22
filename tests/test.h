/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqueiroz <aqueiroz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 11:44:06 by aqueiroz          #+#    #+#             */
/*   Updated: 2023/06/22 09:57:07 by aqueiroz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEST_H
# define TEST_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <string.h>
# include "../libft.h"

extern int counter;
extern int result;

# ifdef NDEBUG
#  define assert(expression) ((void)0)
# else
# define assert(expression) \
    do { \
        if (!(expression)) { \
            char str[50]; \
            sprintf(str, "\033[31m%d.\033[0m", counter); \
            write(2, str, strlen(str)); \
            write(2, "\033[31mFail \033[0m", 14); \
            push_str(&stringArray, &arraySize, #expression); \
        } \
        else { \
            char str[50]; \
            sprintf(str, "\033[32m%d.\033[0m", counter); \
            write(2, str, strlen(str)); \
            write(1, "\033[32mOK \033[0m", 12); \
        } \
        counter++; \
    } while (0)
# endif

void push_str(char*** array, int* size, const char* string);

void t_isalpha(void);
void t_isdigit(void);
void t_isalnum(void);
void t_isascii(void);
void t_isprint(void);
void t_strlen(void);

#endif