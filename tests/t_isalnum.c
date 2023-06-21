/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_isalnum.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqueiroz <aqueiroz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 21:09:41 by aqueiroz          #+#    #+#             */
/*   Updated: 2023/06/20 21:35:28 by aqueiroz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void t_isalnum(void)
{
	char** stringArray = NULL;
    int arraySize = 0;
    int counter = 1;
	
    printf("> Testing: %s\n", __FILE__);

    // Test with alphanumeric characters
    assert(ft_isalnum('a') == 1);
    assert(ft_isalnum('A') == 1);
    assert(ft_isalnum('5') == 1);

    // Test with non-alphanumeric characters
    assert(ft_isalnum('$') == 0);
    assert(ft_isalnum('!') == 0);
    assert(ft_isalnum(' ') == 0);

    // Test with special characters
    assert(ft_isalnum('\0') == 0);       // Null character
    assert(ft_isalnum('\n') == 0);       // Newline character
    assert(ft_isalnum('\t') == 0);       // Tab character

    // Test with extended ASCII characters
    assert(ft_isalnum(128) == 0);        // Ç
    assert(ft_isalnum(255) == 0);        // ÿ

    // Test with negative values
    assert(ft_isalnum(-1) == 0);
    assert(ft_isalnum(-128) == 0);

    // Test with maximum positive value
    assert(ft_isalnum(127) == 0);
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
