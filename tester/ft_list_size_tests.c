/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size_tests.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaciel- <hmaciel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 07:23:57 by hmaciel-          #+#    #+#             */
/*   Updated: 2024/11/10 18:52:38 by hmaciel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

void run_ft_list_size_tests() {

    t_list *list;

    list = NULL;

    // Test 1: list is NULL
    assert(ft_list_size(list) == 0);

    // Test 2: list has 1 element
    ft_list_push_back(&list, "Hello");
    assert(ft_list_size(list) == 1);

    // Test 3: list has 2 elements
    ft_list_push_back(&list, "World");
    assert(ft_list_size(list) == 2);

    // Test 4: list has 3 elements
    ft_list_push_back(&list, "42");
    assert(ft_list_size(list) == 3);

    // Test 5: list has 4 elements
    ft_list_push_back(&list, "is");
    assert(ft_list_size(list) == 4);

    // Test 6: list has 5 elements
    ft_list_push_back(&list, "awesome");
    assert(ft_list_size(list) == 5);

    free_list(list);
    printf("%s\nAll ft_list_size tests passed successfully!\n%s", GREEN, RESET);
}