/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_isascii.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqueiroz <aqueiroz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 09:24:37 by aqueiroz          #+#    #+#             */
/*   Updated: 2023/06/22 09:33:39 by aqueiroz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void t_isascii(void)
{
	char** stringArray = NULL;
    int arraySize = 0;
    int counter = 1;
	
    printf("> Testing: %s\n", __FILE__);

    // Test cases
    assert(ft_isascii(65) == 1);
    assert(ft_isascii(0) == 1);
    assert(ft_isascii(127) == 1);
    assert(ft_isascii(128) == 0);
    assert(ft_isascii(-1) == 0);
    
    // Additional test cases
    assert(ft_isascii(32) == 1);
    assert(ft_isascii(97) == 1);
    assert(ft_isascii(126) == 1);
    assert(ft_isascii(129) == 0);
    assert(ft_isascii(-128) == 0);

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
