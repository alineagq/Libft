/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_isalpha.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqueiroz <aqueiroz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 14:33:28 by aqueiroz          #+#    #+#             */
/*   Updated: 2023/06/20 21:35:29 by aqueiroz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void t_isalpha(void)
{
	char** stringArray = NULL;
    int arraySize = 0;
    int counter = 1;
	
    printf("> Testing: %s\n", __FILE__);

    // Test uppercase letters
    assert(ft_isalpha('A') == 1);
    assert(ft_isalpha('B') == 1);
    assert(ft_isalpha('Z') == 1);

    // Test lowercase letters
    assert(ft_isalpha('a') == 1);
    assert(ft_isalpha('b') == 1);
    assert(ft_isalpha('z') == 1);

    // Test non-alphabetic characters
    assert(ft_isalpha('0') == 0);
    assert(ft_isalpha('9') == 0);
    assert(ft_isalpha('$') == 0);
    assert(ft_isalpha('@') == 0);
    assert(ft_isalpha(' ') == 0);
    assert(ft_isalpha('\n') == 0);

    // Test out-of-range characters
    assert(ft_isalpha(200) == 0);
    assert(ft_isalpha(-50) == 0);

    if (arraySize != 0)
        printf("\n");
    for (int i = 0; i < arraySize; i++) {
        printf("\033[0mError %d: %s\n", i + 1, stringArray[i]);
    }

    // Free the memory allocated for the strings
    for (int i = 0; i < arraySize; i++) {
        free(stringArray[i]);
    }
    // Free the memory allocated for the array
    free(stringArray);
    printf("\n");
}
