/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy_tests.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaciel- <hmaciel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 11:53:35 by hmaciel-          #+#    #+#             */
/*   Updated: 2024/11/08 15:28:01 by hmaciel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

void run_ft_strcpy_tests() {
    char dest[200]; // Buffer for the destination string, large enough for all test cases
    bzero(dest,200);

    // Test 1: Empty string
    strcpy(dest, "");
    assert(strcmp(ft_strcpy(dest, ""), strcpy(dest, "")) == 0);
    bzero(dest,100);

    // Test 2: Single character
    strcpy(dest, "a");
    assert(strcmp(ft_strcpy(dest, "a"), strcpy(dest, "a")) == 0);
    bzero(dest,100);

    // Test 3: Two characters
    strcpy(dest, "ab");
    assert(strcmp(ft_strcpy(dest, "ab"), strcpy(dest, "ab")) == 0);
    bzero(dest,100);

    // Test 4: Simple word
    strcpy(dest, "OpenAI");
    assert(strcmp(ft_strcpy(dest, "OpenAI"), strcpy(dest, "OpenAI")) == 0);
    bzero(dest,100);

    // Test 5: Numbers
    strcpy(dest, "1234567890");
    assert(strcmp(ft_strcpy(dest, "1234567890"), strcpy(dest, "1234567890")) == 0);
    bzero(dest,100);

    // Test 6: Special characters
    strcpy(dest, "!@#$%^&*()");
    assert(strcmp(ft_strcpy(dest, "!@#$%^&*()"), strcpy(dest, "!@#$%^&*()")) == 0);
    bzero(dest,100);

    // Test 7: Space, tab, newline characters
    strcpy(dest, " \t\n");
    assert(strcmp(ft_strcpy(dest, " \t\n"), strcpy(dest, " \t\n")) == 0);
    bzero(dest,100);

    // Test 8: Phrase
    strcpy(dest, "The quick brown fox");
    assert(strcmp(ft_strcpy(dest, "The quick brown fox"), strcpy(dest, "The quick brown fox")) == 0);
    bzero(dest,100);

    // Test 9: Longer phrase
    strcpy(dest, "Lorem ipsum dolor sit amet");
    assert(strcmp(ft_strcpy(dest, "Lorem ipsum dolor sit amet"), strcpy(dest, "Lorem ipsum dolor sit amet")) == 0);
    bzero(dest,100);

    // Test 10: Very long string
    strcpy(dest, "Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua.");
    assert(strcmp(ft_strcpy(dest, "Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua."), strcpy(dest, "Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua.")) == 0);
    bzero(dest,100);

    // Test 11: Escaped characters
    strcpy(dest, "hello\\world");
    assert(strcmp(ft_strcpy(dest, "hello\\world"), strcpy(dest, "hello\\world")) == 0);
    bzero(dest,100);

    // Test 12: Escaped double quotes
    strcpy(dest, "\"quote\"");
    assert(strcmp(ft_strcpy(dest, "\"quote\""), strcpy(dest, "\"quote\"")) == 0);
    bzero(dest,100);

    // Test 13: Null character inside string
    strcpy(dest, "abc\0def");  // The null character will end the copied string at "abc"
    assert(strcmp(ft_strcpy(dest, "abc\0def"), strcpy(dest, "abc\0def")) == 0);
    bzero(dest,100);

    // Test 14: Different language - Portuguese
    strcpy(dest, "Olá");
    assert(strcmp(ft_strcpy(dest, "Olá"), strcpy(dest, "Olá")) == 0);
    bzero(dest,100);

    // Test 15: Japanese (Unicode)
    strcpy(dest, "こんにちは");
    assert(strcmp(ft_strcpy(dest, "こんにちは"), strcpy(dest, "こんにちは")) == 0);
    bzero(dest,100);

    // Test 16: Long alphanumeric string
    const char *alnum_str = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    strcpy(dest, alnum_str);
    assert(strcmp(ft_strcpy(dest, alnum_str), strcpy(dest, alnum_str)) == 0);
    bzero(dest,100);

    // Test 17: Repeated characters
    strcpy(dest, "aaaaaa");
    assert(strcmp(ft_strcpy(dest, "aaaaaa"), strcpy(dest, "aaaaaa")) == 0);
    bzero(dest,100);

    // Test 18: Mixed uppercase and lowercase
    strcpy(dest, "MiXeDcAsE");
    assert(strcmp(ft_strcpy(dest, "MiXeDcAsE"), strcpy(dest, "MiXeDcAsE")) == 0);
    bzero(dest,100);

    // Test 19: Single word with spaces around it
    strcpy(dest, "   spaced   ");
    assert(strcmp(ft_strcpy(dest, "   spaced   "), strcpy(dest, "   spaced   ")) == 0);
    bzero(dest,100);

    // Test 20: String with multiple words
    strcpy(dest, "multiple words with spaces");
    assert(strcmp(ft_strcpy(dest, "multiple words with spaces"), strcpy(dest, "multiple words with spaces")) == 0);
    bzero(dest,100);

    printf("All strcpy tests passed successfully!\n");
}
