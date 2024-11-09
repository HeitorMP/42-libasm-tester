/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if_tests.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaciel- <hmaciel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 08:46:21 by hmaciel-          #+#    #+#             */
/*   Updated: 2024/11/09 18:58:23 by hmaciel-         ###   ########.fr       */
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


    printf("first list:\n");
    print_list(list);
    
    ft_list_remove_if(&list, "Hello", &strcmp, &free);
    
    printf("second list:\n");
    print_list(list);
    
    free_list(list);
}