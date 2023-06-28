/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_memset.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqueiroz <aqueiroz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 11:22:51 by aqueiroz          #+#    #+#             */
/*   Updated: 2023/06/28 16:09:11 by aqueiroz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void t_memset(void)
{
	char** stringArray = NULL;
    int arraySize = 0;
    int counter = 1;
	
    printf("> Testing: %s\n", __FILE__);

    // Teste 1: Preenchendo uma área de memória com um valor específico
    char str1[10] = "Hello";
    ft_memset(str1, 'A', 5);
    assert(memcmp(str1, "AAAAA", 5) == 0);

    // Teste 2: Preenchendo uma área de memória com zero
    int arr2[5] = {1, 2, 3, 4, 5};
    ft_memset(arr2, 0, sizeof(int) * 5);
    for (int i = 0; i < 5; i++) {
        assert(arr2[i] == 0);
    }

    int arr4[5] = {1, 2, 3, 4, 5};
    int *result4 = ft_memset(arr4, 0, sizeof(int) * 5);
    assert(result4 == arr4);


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

