/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup_tests.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaciel- <hmaciel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 15:35:28 by hmaciel-          #+#    #+#             */
/*   Updated: 2024/11/08 23:37:42 by hmaciel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

void run_ft_strdup_tests() {
    char *result1, *result2;

    // Test 1: Duplicate a basic string
    result1 = ft_strdup("Hello, World!");
    result2 = strdup("Hello, World!");
    assert(strcmp(result1, result2) == 0);
    free(result1);
    free(result2);

    // Test 2: Duplicate an empty string
    result1 = ft_strdup("");
    result2 = strdup("");
    assert(strcmp(result1, result2) == 0);
    free(result1);
    free(result2);

    // Test 3: Duplicate a string with special characters
    result1 = ft_strdup("!@#$%^&*()_+");
    result2 = strdup("!@#$%^&*()_+");
    assert(strcmp(result1, result2) == 0);
    free(result1);
    free(result2);

    // Test 4: Duplicate a string with spaces
    result1 = ft_strdup("Hello World!");
    result2 = strdup("Hello World!");
    assert(strcmp(result1, result2) == 0);
    free(result1);
    free(result2);

    // Test 5: Duplicate a string with null character in the middle
    result1 = ft_strdup("abc\0def");
    result2 = strdup("abc\0def");
    assert(strcmp(result1, result2) == 0);  // Compare up to null character
    free(result1);
    free(result2);

    // Test 6: Duplicate a longer string
    const char *long_str = "Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua.";
    result1 = ft_strdup(long_str);
    result2 = strdup(long_str);
    assert(strcmp(result1, result2) == 0);
    free(result1);
    free(result2);

    // Test 7: Duplicate a string with non-printable characters
    result1 = ft_strdup("\tHello\n");
    result2 = strdup("\tHello\n");
    assert(strcmp(result1, result2) == 0);
    free(result1);
    free(result2);

    printf("All ft_strdup tests passed successfully!\n");

}