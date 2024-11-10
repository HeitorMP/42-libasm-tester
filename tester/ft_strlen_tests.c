/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen_tests.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaciel- <hmaciel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 11:45:24 by hmaciel-          #+#    #+#             */
/*   Updated: 2024/11/10 18:50:37 by hmaciel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"


void run_ft_strlen_tests() {
    // Basic tests with common strings
    
    assert(ft_strlen("") == strlen(""));             // Test 1: empty string
    assert(ft_strlen("a") == strlen("a"));           // Test 2: single character
    assert(ft_strlen("ab") == strlen("ab"));         // Test 3: two characters
    assert(ft_strlen("Heitor") == strlen("Heitor")); // Test 4: simple word

    // Tests with special characters
    assert(ft_strlen("1234567890") == strlen("1234567890")); // Test 5: digits
    assert(ft_strlen("!@#$%^&*()") == strlen("!@#$%^&*()")); // Test 6: special characters
    assert(ft_strlen(" \t\n") == strlen(" \t\n"));           // Test 7: space, tab, newline

    // Tests with varying string lengths
    assert(ft_strlen("a") == strlen("a"));                         // Test 8: 1 character
    assert(ft_strlen("ab") == strlen("ab"));                       // Test 9: 2 characters
    assert(ft_strlen("abcdef") == strlen("abcdef"));               // Test 10: 6 characters
    assert(ft_strlen("abcdefghijklmnopqrstuvwxyz") == strlen("abcdefghijklmnopqrstuvwxyz")); // Test 11: 26 characters

    // Tests with sentences and longer strings
    assert(ft_strlen("The quick brown fox") == strlen("The quick brown fox"));               // Test 12: phrase
    assert(ft_strlen("Lorem ipsum dolor sit amet") == strlen("Lorem ipsum dolor sit amet")); // Test 13: longer phrase

    // Tests with very large strings
    const char *long_str = "Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua.";
    assert(ft_strlen(long_str) == strlen(long_str)); // Test 14: long string 1
    const char *very_long_str = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    assert(ft_strlen(very_long_str) == strlen(very_long_str)); // Test 15: very long string 2

    // Tests with escaped characters
    assert(ft_strlen("hello\\world") == strlen("hello\\world")); // Test 16: backslash
    assert(ft_strlen("\"quote\"") == strlen("\"quote\""));       // Test 17: escaped double quotes

    // Tests with strings containing null characters
    assert(ft_strlen("abc\0def") == strlen("abc\0def")); // Test 18: null character in the middle

    // Tests with strings in different languages
    assert(ft_strlen("Olá") == strlen("Olá"));             // Test 19: Portuguese
    assert(ft_strlen("こんにちは") == strlen("こんにちは")); // Test 20: Japanese (unicode)

    printf("%s\nAll ft_strlen tests passed successfully!\n$%s\n", GREEN, RESET);
}
