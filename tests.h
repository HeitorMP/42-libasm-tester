/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaciel- <hmaciel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 11:44:06 by hmaciel-          #+#    #+#             */
/*   Updated: 2024/11/08 23:46:03 by hmaciel-         ###   ########.fr       */
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

void run_ft_strlen_tests();
void run_ft_strcpy_tests();
void run_ft_strcmp_tests();
void run_ft_strdup_tests();
void run_ft_write_tests();
void run_ft_read_tests();
void run_ft_atoi_base_tests();

#endif