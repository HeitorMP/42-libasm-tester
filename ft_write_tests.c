/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_write_tests.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaciel- <hmaciel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 11:45:24 by hmaciel-          #+#    #+#             */
/*   Updated: 2024/11/08 22:29:33 by hmaciel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

void run_ft_write_tests() {
    ssize_t ft_result, orig_result;
    int ft_errno, orig_errno;

    // Test 1: Writing to stdout
    errno = 0;
    ft_result = ft_write(1, "Hello, World!\n", 14);
    ft_errno = errno;
    errno = 0; // Reset errno for the next test
    orig_result = write(1, "Hello, World!\n", 14);
    orig_errno = errno;
    assert((ft_result == orig_result) && (ft_errno == orig_errno));

    // Test 2: Writing an empty string
    errno = 0;
    ft_result = ft_write(1, "", 0);
    ft_errno = errno;
    errno = 0;
    orig_result = write(1, "", 0);
    orig_errno = errno;
    assert((ft_result == orig_result) && (ft_errno == orig_errno));

    // Test 3: Writing a string to stderr
    errno = 0;
    ft_result = ft_write(2, "Error message\n", 14);
    ft_errno = errno;
    errno = 0;
    orig_result = write(2, "Error message\n", 14);
    orig_errno = errno;
    assert((ft_result == orig_result) && (ft_errno == orig_errno));

    // Test 4: Writing to an invalid file descriptor
    errno = 0;
    ft_result = ft_write(-1, "Invalid FD\n", 11);
    ft_errno = errno;
    errno = 0;
    orig_result = write(-1, "Invalid FD\n", 11);
    orig_errno = errno;
    assert((ft_result == orig_result) && (ft_errno == orig_errno));
    errno = 0;

    // Test 5: Writing a large string
    const char *large_str = "Lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed do eiusmod tempor incididunt ut labore et dolore magna aliqua.\n";
    ft_result = ft_write(1, large_str, strlen(large_str));
    ft_errno = errno;
    printf("%d\n",ft_errno);
    orig_result = write(1, large_str, strlen(large_str));
    errno = 0;
    orig_errno = errno;
    printf("%d\n",orig_errno);
    assert((ft_result == orig_result) && (ft_errno == orig_errno));

    // Test 6: Null pointer as buffer
    errno = 0;
    ft_result = ft_write(1, NULL, 5);
    ft_errno = errno;
    errno = 0;
    orig_result = write(1, NULL, 5);
    orig_errno = errno;
    assert((ft_result == orig_result) && (ft_errno == orig_errno));

    printf("All ft_write tests passed successfully!\n");
}
