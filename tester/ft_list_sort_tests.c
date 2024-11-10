/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_sort_tests.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaciel- <hmaciel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 08:11:09 by hmaciel-          #+#    #+#             */
/*   Updated: 2024/11/10 18:52:23 by hmaciel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

void run_ft_list_sort_tests()
{
    t_list *list = NULL;
    
    // Test 1: Sort an empty list
    ft_list_sort(&list, NULL);
    assert(list == NULL);

    // Test 2: Sort list passing NULL as compare function
    ft_list_push_back(&list, "1");
    ft_list_sort(&list, NULL);
    assert(strcmp(list->data, "1") == 0);
    free_list(list);
    list = NULL;

    // Test 3: Sort list with 1 elements
    ft_list_push_back(&list, "1");
    ft_list_sort(&list, &ft_strcmp);
    assert(strcmp(list->data, "1") == 0);

    // Test 4: Sort list with 2 elements
    ft_list_push_front(&list, "2");
    ft_list_sort(&list, &ft_strcmp);
    assert(strcmp(list->data, "1") == 0 && strcmp(list->next->data, "2") == 0);

    // Test 5: Sort list with 3 elements
    ft_list_push_front(&list, "3");
    ft_list_sort(&list, &ft_strcmp);
    assert(strcmp(list->data, "1") == 0 && strcmp(list->next->data, "2") == 0 && strcmp(list->next->next->data, "3") == 0);

    // Test 6: Sort list with 4 elements
    free_list(list);
    list = NULL;
    ft_list_push_back(&list, "Hello");
    ft_list_push_back(&list, "World");
    ft_list_push_back(&list, "42");
    ft_list_push_back(&list, "is");

    ft_list_sort(&list, &ft_strcmp);
    assert(strcmp(list->data, "42") == 0 && \
           strcmp(list->next->data, "Hello") == 0 && \
           strcmp(list->next->next->data, "World") == 0 && \
           strcmp(list->next->next->next->data, "is") == 0);
    

    // Test 7: Sort list with another 4 elements
    free_list(list);
    list = NULL;
    ft_list_push_back(&list, "Hello");
    ft_list_push_back(&list, "World");
    ft_list_push_back(&list, "42");
    ft_list_push_back(&list, "Is");
    
    ft_list_sort(&list, &ft_strcmp);
    assert(strcmp(list->data, "42") == 0 && \
           strcmp(list->next->data, "Hello") == 0 && \
           strcmp(list->next->next->data, "Is") == 0 && \
           strcmp(list->next->next->next->data, "World") == 0);


    // Test 8: Sort list with 15 elements
    free_list(list);
    list = NULL;

    ft_list_push_back(&list, "Hello");
    ft_list_push_back(&list, "World");
    ft_list_push_back(&list, "42");
    ft_list_push_back(&list, "Is");
    ft_list_push_back(&list, "The");
    ft_list_push_back(&list, "Answer");
    ft_list_push_back(&list, "To");
    ft_list_push_back(&list, "Life");
    ft_list_push_back(&list, "The");
    ft_list_push_back(&list, "Universe");
    ft_list_push_back(&list, "And");
    ft_list_push_back(&list, "Everything");
    ft_list_push_back(&list, "Is");
    ft_list_push_back(&list, "42");
    ft_list_push_back(&list, "!");

    ft_list_sort(&list, &ft_strcmp);
    assert(strcmp(list->data, "!") == 0 && \
           strcmp(list->next->data, "42") == 0 && \
           strcmp(list->next->next->data, "42") == 0 && \
           strcmp(list->next->next->next->data, "And") == 0 && \
           strcmp(list->next->next->next->next->data, "Answer") == 0 && \
           strcmp(list->next->next->next->next->next->data, "Everything") == 0 && \
           strcmp(list->next->next->next->next->next->next->data, "Hello") == 0 && \
           strcmp(list->next->next->next->next->next->next->next->data, "Is") == 0 && \
           strcmp(list->next->next->next->next->next->next->next->next->data, "Is") == 0 && \
           strcmp(list->next->next->next->next->next->next->next->next->next->data, "Life") == 0 && \
           strcmp(list->next->next->next->next->next->next->next->next->next->next->data, "The") == 0 && \
           strcmp(list->next->next->next->next->next->next->next->next->next->next->next->data, "The") == 0 && \
           strcmp(list->next->next->next->next->next->next->next->next->next->next->next->next->data, "To") == 0 && \
           strcmp(list->next->next->next->next->next->next->next->next->next->next->next->next->next->data, "Universe") == 0 && \
           strcmp(list->next->next->next->next->next->next->next->next->next->next->next->next->next->next->data, "World") == 0);
    
    free_list(list);
    list = NULL;

    printf("\n%sAll ft_list_sort tests passed successfully!\n%s", GREEN, RESET);
    
}