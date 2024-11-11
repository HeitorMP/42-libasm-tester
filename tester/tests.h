/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaciel- <hmaciel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 11:44:06 by hmaciel-          #+#    #+#             */
/*   Updated: 2024/11/11 10:49:14 by hmaciel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TESTS_H
# define TESTS_H

# include <stdio.h>
# include <string.h>
# include <assert.h>
# include <unistd.h>
# include <errno.h>
# include <fcntl.h>
# include <stdlib.h> 

// path to your libasm.h
# include "../headers/libasm.h"

# define RED "\033[0;31m"
# define GREEN "\033[0;32m"
# define YELLOW "\033[0;33m"
# define RESET "\033[0m"


#define assert(condition) \
    if (!(condition)) { \
        fprintf(stderr, "\033[0;31mAssertion failed: %s, file %s, line %d\n\033[0m", #condition, __FILE__, __LINE__); \
    } else { \
        fprintf(stdout, "\033[0;32mAssertion passed: %s\n\033[0m", #condition); \
    }

// Utils
void    ft_list_create_new(t_list **list, void *data);
void    ft_list_push_back(t_list **list, void *data);
void    free_list(t_list *list);
void    print_list(t_list *list);

// Tests
void    run_ft_strcmp_tests();
void    run_ft_strdup_tests();
void    run_ft_strcpy_tests();
void    run_ft_write_tests();
void    run_ft_read_tests();
void    run_ft_strlen_tests();
void    run_ft_atoi_base_tests();
void    run_ft_list_size_tests();
void    run_ft_list_push_front_tests();
void    run_ft_list_sort_tests();
void    run_ft_list_remove_if_tests();

#endif