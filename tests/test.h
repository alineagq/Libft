/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqueiroz <aqueiroz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 11:44:06 by aqueiroz          #+#    #+#             */
/*   Updated: 2023/06/20 18:06:25 by aqueiroz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEST_H
# define TEST_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <string.h>

# ifdef NDEBUG
#  define assert(expression) ((void)0)
# else
# define assert(expression) \
    do { \
        if (!(expression)) { \
            char str[50]; \
            sprintf(str, "\033[31m%d.\033[0m", counter); \
            write(2, str, strlen(str)); \
            write(2, "\033[31mFail \033[0m", 10); \
            push_str(&stringArray, &arraySize, #expression); \
        } \
        else { \
            char str[50]; \
            sprintf(str, "\033[32m%d.\033[0m", counter); \
            write(2, str, strlen(str)); \
            write(1, "\033[32mOK \033[0m", 8); \
        } \
        counter++; \
    } while (0)
# endif

void push_str(char*** array, int* size, const char* string);

void t_isalpha(void);

#endif