/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaciel- <hmaciel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 11:44:06 by hmaciel-          #+#    #+#             */
/*   Updated: 2024/11/10 17:57:17 by hmaciel-         ###   ########.fr       */
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
# define RESET "\033[0m"

// Utils
void    ft_list_create_new(t_list **list, void *data);
void    ft_list_push_back(t_list **list, void *data);
void    free_list(t_list *list);
void    print_list(t_list *list);

// Tests
void    run_ft_strcmp_tests(fd);
void    run_ft_strdup_tests(fd);
void    run_ft_strcpy_tests(fd);
void    run_ft_write_tests(fd);
void    run_ft_read_tests(fd);
void    run_ft_strlen_tests(fd);
void    run_ft_atoi_base_tests(fd);
void    run_ft_list_size_tests(fd);
void    run_ft_list_push_front_tests(fd);
void    run_ft_list_sort_tests(fd);
void    run_ft_list_remove_if_tests(fd);

#endif