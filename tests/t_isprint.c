/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_isprint.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqueiroz <aqueiroz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 09:42:00 by aqueiroz          #+#    #+#             */
/*   Updated: 2023/06/22 09:43:29 by aqueiroz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void t_isprint(void)
{
	char** stringArray = NULL;
    int arraySize = 0;
    int counter = 1;
	
    printf("> Testing: %s\n", __FILE__);

    // Test cases
    assert(ft_isprint(65) == 1);
    assert(ft_isprint(0) == 0);
    assert(ft_isprint(126) == 1);
    assert(ft_isprint(127) == 0);
    assert(ft_isprint(31) == 0);
    
    // Additional test cases
    assert(ft_isprint(32) == 1);
    assert(ft_isprint(97) == 1);
    assert(ft_isprint(125) == 1);
    assert(ft_isprint(128) == 0);
    assert(ft_isprint(-1) == 0);

    if (arraySize != 0)
        printf("\n%d", arraySize);
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
