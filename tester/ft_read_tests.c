/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_tests.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaciel- <hmaciel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 22:29:46 by hmaciel-          #+#    #+#             */
/*   Updated: 2024/11/10 18:52:13 by hmaciel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

void run_ft_read_tests() {
    //read from file test
    int fd_orig, fd_my;
    ssize_t read_orig, read_my;
    char buf_orig[100];
    char buf_my[100];

    fd_orig = open("testfile.txt", O_RDONLY);
    fd_my = open("testfile.txt", O_RDONLY);
    
    if (fd_orig == -1 || fd_my == -1) {
        perror("Failed to open testasdas file");
        return;
    }

    int my_errno = 0;
    int original_errno = 0;
    while (1) {
        memset(buf_orig, 0, sizeof(buf_orig));
        memset(buf_my, 0, sizeof(buf_my));
        errno = 0;
        read_orig = read(fd_orig, buf_orig, sizeof(buf_orig) - 1);
        original_errno = errno;
        errno = 0;
        read_my = ft_read(fd_my, buf_my, sizeof(buf_my) - 1);
        my_errno = errno;
        if (read_orig == -1 && read_my == -1) {
            assert(original_errno == my_errno);
            break;
        }
        printf("orig: %ld, my: %ld\n", read_orig, read_my);
        printf("orig: %d, my: %d\n", original_errno, my_errno);

        assert(read_orig == read_my);

        assert(memcmp(buf_orig, buf_my, read_orig) == 0);

        if (read_orig == 0)
            break;
    }

    close(fd_orig);
    close(fd_my);

    //bad file descriptor test
    errno = 0;
    read_orig = read(-1, buf_orig, sizeof(buf_orig) - 1);
    original_errno = errno;
    errno = 0;
    read_my = ft_read(-1, buf_my, sizeof(buf_my) - 1);
    my_errno = errno;
    printf("orig: %ld, my: %ld\n", read_orig, read_my);
    printf("orig: %d, my: %d\n", original_errno, my_errno);
    if (read_orig == -1 && read_my == -1) {
        assert(original_errno == my_errno);
    }

    printf("%s\nAll ft_read tests passed successfully!\n%s", GREEN, RESET);
}
