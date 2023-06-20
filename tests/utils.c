/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqueiroz <aqueiroz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 18:04:34 by aqueiroz          #+#    #+#             */
/*   Updated: 2023/06/20 18:05:04 by aqueiroz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void push_str(char*** array, int* size, const char* string) {
    // Increase the size of the array
    (*size)++;
    // Reallocate memory for the updated array
    *array = realloc(*array, sizeof(char*) * (*size));
    // Allocate memory for the new string
    (*array)[*size - 1] = malloc(strlen(string) + 1);
    // Copy the string into the array
    strcpy((*array)[*size - 1], string);
}