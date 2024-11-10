/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if_tests.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaciel- <hmaciel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 08:46:21 by hmaciel-          #+#    #+#             */
/*   Updated: 2024/11/10 17:55:21 by hmaciel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

void    my_free()
{
    ft_write(1, "free\n", 5);
}

void run_ft_list_remove_if_tests()
{
    t_list *list = NULL;
    ft_list_push_front(&list, "World");
    ft_list_push_front(&list, "Hello");
    ft_list_push_front(&list, "World");
    ft_list_push_front(&list, "Hello");
    ft_list_push_front(&list, "World");
    ft_list_push_front(&list, "Hello");
    ft_list_push_front(&list, "World");
    ft_list_push_front(&list, "Hello");
    ft_list_push_front(&list, "World");
    ft_list_push_front(&list, "Hello");
    ft_list_push_front(&list, "World");
    ft_list_push_front(&list, "Hello");
    ft_list_push_front(&list, "World");
    ft_list_push_front(&list, "Hello");
    ft_list_push_front(&list, "World");
    ft_list_push_front(&list, "Hello");
    ft_list_push_front(&list, "World");
    ft_list_push_front(&list, "Hello");
    ft_list_push_front(&list, "World");
    
    ft_list_remove_if(&list, "Hello", &strcmp, &free);
    for (t_list *tmp = list; tmp; tmp = tmp->next)
        assert(strcmp(tmp->data, "World") == 0);

    printf("ft_list_remove_if result list:\n");
    print_list(list);
    
    free_list(list);
}