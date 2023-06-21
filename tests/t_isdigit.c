/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_isdigit.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqueiroz <aqueiroz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 14:33:28 by aqueiroz          #+#    #+#             */
/*   Updated: 2023/06/20 20:40:32 by aqueiroz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void t_isdigit(void)
{
	char** stringArray = NULL;
    int arraySize = 0;
    int counter = 1;
	
    printf("Testing: %s\n", __FILE__);

    // Test digits
    assert(ft_isdigit('0') == 1);
    assert(ft_isdigit('1') == 1);
    assert(ft_isdigit('9') == 1);

    // Test non-digit characters
    assert(ft_isdigit('A') == 0);
    assert(ft_isdigit('B') == 0);
    assert(ft_isdigit('z') == 0);
    assert(ft_isdigit('$') == 0);
    assert(ft_isdigit('@') == 0);
    assert(ft_isdigit(' ') == 0);
    assert(ft_isdigit('\n') == 0);

    // Test out-of-range characters
    assert(ft_isdigit(200) == 0);
    assert(ft_isdigit(-50) == 0);

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
