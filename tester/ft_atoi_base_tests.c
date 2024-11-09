/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base_tests.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaciel- <hmaciel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 22:47:10 by hmaciel-          #+#    #+#             */
/*   Updated: 2024/11/09 07:48:08 by hmaciel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

void run_ft_atoi_base_tests() {
    // Test 1: Empty string
    assert(ft_atoi_base("", "01") == 0);

    // Test 2: Single digit binaries
    assert(ft_atoi_base("1", "01") == 1);

    // Test 3: Not in base
    assert(ft_atoi_base("12345", "01") == 0);

    // Test 4: Single digit octals
    assert(ft_atoi_base("7", "01234567") == 7);

    // Test 5: Single digit decimals
    assert(ft_atoi_base("9", "0123456789") == 9);

    // Test 6: Single digit hexadecimals
    assert(ft_atoi_base("f", "0123456789abcdef") == 15);

    // Test 7: Negative number with base 2
    assert(ft_atoi_base("-1", "01") == -1);

    // Test 8: Negative number with base 2
    assert(ft_atoi_base("-10", "01") == -2);
    
    // Test 9: Negative number with base 10
    assert(ft_atoi_base("-10", "0123456789") == -10);

    // Test 10: Negative number with base 16
    assert(ft_atoi_base("-10", "0123456789abcdef") == -16);

    // Test 11: Repeated characters in base
    assert(ft_atoi_base("111", "011") == 0);

    // Test 12: spaces in number
    assert(ft_atoi_base("                   1", "01") == 1);

    // Test 13: spaces in base
    assert(ft_atoi_base("1", " 01") == 0);

    // Test 14: spaces in both
    assert(ft_atoi_base("                   1", " 01") == 0);

    // Test 15: Invalid base
    assert(ft_atoi_base("1", "0") == 0);

    // Test 16: + sign
    assert(ft_atoi_base("+1", "01") == 1);
    
    // Test 17: a lot of + signs
    assert(ft_atoi_base("+++++++++++++++++++++++++++++1", "01") == 1);
    
    // Test 18: - sign
    assert(ft_atoi_base("-1", "01") == -1);

    // Test 19: a lot of - signs
    assert(ft_atoi_base("-----------------------------1", "01") == -1);

    // Test 20: + and - sign
    assert(ft_atoi_base("+-1", "01") == -1);

    // Test 21: - and + signs
    assert(ft_atoi_base("-+1", "01") == 1);

    // Test 22: inverted base
    assert(ft_atoi_base("1", "10") == 0);

    // Test 23: empty base
    assert(ft_atoi_base("1", "") == 0);

    // Test 24: empty number
    assert(ft_atoi_base("", "01") == 0);

    char *str = NULL;
    // Test 25: null number
    assert(ft_atoi_base(str, "012") == 0);

    // Test 26: null base
    assert(ft_atoi_base("1", str) == 0);

    // Test 27: max int hexa converted to decimal
    assert(ft_atoi_base("7fffffff", "0123456789abcdef") == 2147483647);

    // Test 28: min int hexa converted to decimal
    assert(ft_atoi_base("-80000000", "0123456789abcdef") == -2147483648);

    printf("All ft_atoi_base tests passed successfully!!\n");
}