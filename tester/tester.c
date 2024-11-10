/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tester.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaciel- <hmaciel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 23:34:56 by hmaciel-          #+#    #+#             */
/*   Updated: 2024/11/10 18:35:59 by hmaciel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"


int main() {

    FILE *log_file = fopen("log_errors.txt", "w");
    if (!log_file) {
        fprintf(stderr, "Failed to open log file.\n");
        return 1;
    }

    freopen("log_errors.txt", "a", stderr);

    
    printf("%s=======================================================%s\n", YELLOW, RESET);
    printf("%s                        FT_STRLEN                      %s\n", YELLOW, RESET);
    printf("%s=======================================================%s\n\n", YELLOW, RESET);
    run_ft_strlen_tests();

    
    printf("%s=======================================================%s\n", YELLOW, RESET);
    printf("%s                        FT_STRCPY                      %s\n", YELLOW, RESET);
    printf("%s=======================================================%s\n\n", YELLOW, RESET);
    run_ft_strcpy_tests();

    
    printf("%s=======================================================%s\n", YELLOW, RESET);
    printf("%s                        FT_STRCMP                      %s\n", YELLOW, RESET);
    printf("%s=======================================================%s\n\n", YELLOW, RESET);
    run_ft_strcmp_tests();

    
    printf("%s=======================================================%s\n", YELLOW, RESET);
    printf("%s                        FT_STRDUP                      %s\n", YELLOW, RESET);
    printf("%s=======================================================%s\n\n", YELLOW, RESET);
    run_ft_strdup_tests();

    
    printf("%s=======================================================%s\n", YELLOW, RESET);
    printf("%s                        FT_WRITE                       %s\n", YELLOW, RESET);
    printf("%s=======================================================%s\n\n", YELLOW, RESET);
    run_ft_write_tests();

    
    printf("%s=======================================================%s\n", YELLOW, RESET);
    printf("%s                        FT_READ                        %s\n", YELLOW, RESET);
    printf("%s=======================================================%s\n\n", YELLOW, RESET);
    run_ft_read_tests();

    
    printf("%s=======================================================%s\n", YELLOW, RESET);
    printf("%s                        FT_ATOI_BASE                   %s\n", YELLOW, RESET);
    printf("%s=======================================================%s\n\n", YELLOW, RESET);
    run_ft_atoi_base_tests();

    
    printf("%s=======================================================%s\n", YELLOW, RESET);
    printf("%s                        FT_LIST_SIZE                   %s\n", YELLOW, RESET);
    printf("%s=======================================================%s\n\n", YELLOW, RESET);
    run_ft_list_size_tests();
    
    
    printf("%s=======================================================%s\n", YELLOW, RESET);
    printf("%s                      FT_LIST_PUSH_FRONT               %s\n", YELLOW, RESET);
    printf("%s=======================================================%s\n\n", YELLOW, RESET);
    run_ft_list_push_front_tests();
    
    
    printf("%s=======================================================%s\n", YELLOW, RESET);
    printf("%s                        FT_LIST_SORT                   %s\n", YELLOW, RESET);
    printf("%s=======================================================%s\n\n", YELLOW, RESET);
    run_ft_list_sort_tests();
    
    
    printf("%s=======================================================%s\n", YELLOW, RESET);
    printf("%s                   FT_LIST_REMOVE_IF                   %s\n", YELLOW, RESET);
    printf("%s=======================================================%s\n\n", YELLOW, RESET);
    run_ft_list_remove_if_tests();

    fclose(log_file);

    return 0;
}
