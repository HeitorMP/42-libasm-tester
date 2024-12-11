#include "tests.h"

void run_ft_strcmp_tests() {
    // Test 1: Compare two identical strings
    char *str1 = "Hello";
    char *str2 = "Hello";
    assert(ft_strcmp(str1, str2) == strcmp(str1, str2));
    
    // Test 2: Compare two different strings with different lengths
    char *str3 = "Hello";
    char *str4 = "Hello World";
    assert(ft_strcmp(str3, str4) == strcmp(str3, str4));

    // Test 3: Compare two different strings with same lengths
    char *str5 = "Hello";
    char *str6 = "Hella";
    assert(ft_strcmp(str5, str6) == strcmp(str5, str6));

    // Test 4: Compare empty string with another empty string
    char *str7 = "";
    char *str8 = "";
    assert(ft_strcmp(str7, str8) == strcmp(str7, str8));

    // Test 5: Compare empty string with a non-empty string
    char *str9 = "";
    char *str10 = "Test";
    assert(ft_strcmp(str9, str10) == strcmp(str9, str10));

    // Test 6: Compare a non-empty string with an empty string
    char *str11 = "Test";
    char *str12 = "";
    assert(ft_strcmp(str11, str12) == strcmp(str11, str12));

    // Test 7: Compare strings with numbers
    char *str13 = "123";
    char *str14 = "123";
    assert(ft_strcmp(str13, str14) == strcmp(str13, str14));
    char *str15 = "123";
    char *str16 = "124";
    assert(ft_strcmp(str15, str16) == strcmp(str15, str16));

    // Test 8: Compare strings with special characters
    char *str17 = "!@#$";
    char *str18 = "!@#$";
    assert(ft_strcmp(str17, str18) == strcmp(str17, str18));
    char *str19 = "!@#$";
    char *str20 = "!@#%";
    assert(ft_strcmp(str19, str20) == strcmp(str19, str20));

    // Test 9: Compare strings with spaces
    char *str21 = "Hello World";
    char *str22 = "Hello World";
    assert(ft_strcmp(str21, str22) == strcmp(str21, str22));
    char *str23 = "Hello World";
    char *str24 = "Hello  World";
    assert(ft_strcmp(str23, str24) == strcmp(str23, str24));

    // Test 10: Compare strings with uppercase and lowercase differences
    char *str25 = "apple";
    char *str26 = "Apple";
    assert(ft_strcmp(str25, str26) == strcmp(str25, str26));
    char *str27 = "Apple";
    char *str28 = "apple";
    assert(ft_strcmp(str27, str28) == strcmp(str27, str28));

    // Test 11: Compare strings that differ at the first character
    char *str29 = "aHello";
    char *str30 = "bHello";
    assert(ft_strcmp(str29, str30) == strcmp(str29, str30));

    // Test 12: Compare strings with the same prefix but different lengths
    char *str31 = "Hello";
    char *str32 = "Hello!";
    assert(ft_strcmp(str31, str32) == strcmp(str31, str32));

    // Test 13: Compare strings with mixed alphanumeric characters
    char *str33 = "abc123";
    char *str34 = "abc123";
    assert(ft_strcmp(str33, str34) == strcmp(str33, str34));
    char *str35 = "abc123";
    char *str36 = "abc124";
    assert(ft_strcmp(str35, str36) == strcmp(str35, str36));

    // Test 14: Compare strings with non-printable characters
    char *str37 = "\tHello\n";
    char *str38 = "\tHello\n";
    assert(ft_strcmp(str37, str38) == strcmp(str37, str38));
    char *str39 = "\tHello\n";
    char *str40 = "\tHello ";
    assert(ft_strcmp(str39, str40) == strcmp(str39, str40));

    // Test 15: Compare strings containing null characters in the middle
    char *str41 = "abc\0def";
    char *str42 = "abc\0def";
    assert(ft_strcmp(str41, str42) == strcmp(str41, str42));
    char *str43 = "abc\0def";
    char *str44 = "abc";
    assert(ft_strcmp(str43, str44) == strcmp(str43, str44));

    // Test 16: Compare strings in different languages
    char *str45 = "Olá";
    char *str46 = "Olá";
    assert(ft_strcmp(str45, str46) == strcmp(str45, str46));
    char *str47 = "こんにちは";
    char *str48 = "こんばんは";
    assert(ft_strcmp(str47, str48) == strcmp(str47, str48));

    // Test 17: Compare long strings
    char *str49 = "Lorem ipsum dolor sit amet, consectetur adipiscing elit";
    char *str50 = "Lorem ipsum dolor sit amet, consectetur adipiscing elit";
    char *str51 = "Lorem ipsum dolor sit amet, consectetur";
    assert(ft_strcmp(str49, str50) == strcmp(str49, str50));
    assert(ft_strcmp(str49, str51) == strcmp(str49, str51));

    // Test 18: Compare strings with repeated characters
    char *str52 = "aaaaa";
    char *str53 = "aaaaa";
    assert(ft_strcmp(str52, str53) == strcmp(str52, str53));
    char *str54 = "aaaaa";
    char *str55 = "aaaab";
    assert(ft_strcmp(str54, str55) == strcmp(str54, str55));

    // Test 19: Compare numeric strings
    char *str56 = "100";
    char *str57 = "100";
    assert(ft_strcmp(str56, str57) == strcmp(str56, str57));
    char *str58 = "100";
    char *str59 = "101";
    assert(ft_strcmp(str58, str59) == strcmp(str58, str59));
    char *str60 = "101";
    char *str61 = "100";
    assert(ft_strcmp(str60, str61) == strcmp(str60, str61));

    // Test 20: Compare strings with spaces at the end
    char *str62 = "Hello ";
    char *str63 = "Hello";
    assert(ft_strcmp(str62, str63) == strcmp(str62, str63));
    char *str64 = "Hello";
    char *str65 = "Hello ";
    assert(ft_strcmp(str64, str65) == strcmp(str64, str65));

    printf("%s\nAll ft_strcmp tests passed successfully!\n%s", GREEN, RESET);
}
