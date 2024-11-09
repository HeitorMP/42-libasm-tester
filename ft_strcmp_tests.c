#include "tests.h"

void run_ft_strcmp_tests() {
    // Test 1: Compare two identical strings
    assert((ft_strcmp("Hello", "Hello") == 0) == (strcmp("Hello", "Hello") == 0));

    // Test 2: Compare two different strings with different lengths
    assert((ft_strcmp("Hello", "Hello World") < 0) == (strcmp("Hello", "Hello World") < 0));

    // Test 3: Compare two different strings with same lengths
    assert((ft_strcmp("Hello", "Hella") > 0) == (strcmp("Hello", "Hella") > 0));

    // Test 4: Compare empty string with another empty string
    assert((ft_strcmp("", "") == 0) == (strcmp("", "") == 0));

    // Test 5: Compare empty string with a non-empty string
    assert((ft_strcmp("", "Test") < 0) == (strcmp("", "Test") < 0));

    // Test 6: Compare a non-empty string with an empty string
    assert((ft_strcmp("Test", "") > 0) == (strcmp("Test", "") > 0));

    // Test 7: Compare strings with numbers
    assert((ft_strcmp("123", "123") == 0) == (strcmp("123", "123") == 0));
    assert((ft_strcmp("123", "124") < 0) == (strcmp("123", "124") < 0));

    // Test 8: Compare strings with special characters
    assert((ft_strcmp("!@#$", "!@#$") == 0) == (strcmp("!@#$", "!@#$") == 0));
    assert((ft_strcmp("!@#$", "!@#%") < 0) == (strcmp("!@#$", "!@#%") < 0));

    // Test 9: Compare strings with spaces
    assert((ft_strcmp("Hello World", "Hello World") == 0) == (strcmp("Hello World", "Hello World") == 0));
    assert((ft_strcmp("Hello World", "Hello  World") > 0) == (strcmp("Hello World", "Hello  World") > 0));

    // Test 10: Compare strings with uppercase and lowercase differences
    assert((ft_strcmp("apple", "Apple") > 0) == (strcmp("apple", "Apple") > 0));
    assert((ft_strcmp("Apple", "apple") < 0) == (strcmp("Apple", "apple") < 0));

    // Test 11: Compare strings that differ at the first character
    assert((ft_strcmp("aHello", "bHello") < 0) == (strcmp("aHello", "bHello") < 0));

    // Test 12: Compare strings with the same prefix but different lengths
    assert((ft_strcmp("Hello", "Hello!") < 0) == (strcmp("Hello", "Hello!") < 0));
    
    // Test 13: Compare strings with mixed alphanumeric characters
    assert((ft_strcmp("abc123", "abc123") == 0) == (strcmp("abc123", "abc123") == 0));
    assert((ft_strcmp("abc123", "abc124") < 0) == (strcmp("abc123", "abc124") < 0));

    // Test 14: Compare strings with non-printable characters
    assert((ft_strcmp("\tHello\n", "\tHello\n") == 0) == (strcmp("\tHello\n", "\tHello\n") == 0));
    assert((ft_strcmp("\tHello\n", "\tHello ") > 0) == (strcmp("\tHello\n", "\tHello ") > 0));

    // Test 15: Compare strings containing null characters in the middle
    assert((ft_strcmp("abc\0def", "abc\0def") == 0) == (strcmp("abc\0def", "abc\0def") == 0));
    assert((ft_strcmp("abc\0def", "abc") > 0) == (strcmp("abc\0def", "abc") > 0));

    // Test 16: Compare strings in different languages
    assert((ft_strcmp("Olá", "Olá") == 0) == (strcmp("Olá", "Olá") == 0)); // Portuguese
    assert((ft_strcmp("こんにちは", "こんばんは") < 0) == (strcmp("こんにちは", "こんばんは") < 0)); // Japanese

    // Test 17: Compare long strings
    const char *long_str1 = "Lorem ipsum dolor sit amet, consectetur adipiscing elit";
    const char *long_str2 = "Lorem ipsum dolor sit amet, consectetur adipiscing elit";
    const char *long_str3 = "Lorem ipsum dolor sit amet, consectetur";
    assert((ft_strcmp(long_str1, long_str2) == 0) == (strcmp(long_str1, long_str2) == 0));
    assert((ft_strcmp(long_str1, long_str3) > 0) == (strcmp(long_str1, long_str3) > 0));

    // Test 18: Compare strings with repeated characters
    assert((ft_strcmp("aaaaa", "aaaaa") == 0) == (strcmp("aaaaa", "aaaaa") == 0));
    assert((ft_strcmp("aaaaa", "aaaab") < 0) == (strcmp("aaaaa", "aaaab") < 0));

    // Test 19: Compare numeric strings
    assert((ft_strcmp("100", "100") == 0) == (strcmp("100", "100") == 0));
    assert((ft_strcmp("100", "101") < 0) == (strcmp("100", "101") < 0));
    assert((ft_strcmp("101", "100") > 0) == (strcmp("101", "100") > 0));

    // Test 20: Compare strings with spaces at the end
    assert((ft_strcmp("Hello ", "Hello") > 0) == (strcmp("Hello ", "Hello") > 0));
    assert((ft_strcmp("Hello", "Hello ") < 0) == (strcmp("Hello", "Hello ") < 0));

    printf("All ft_strcmp tests passed successfully!\n");
}
