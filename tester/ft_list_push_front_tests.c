/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front_tests.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaciel- <hmaciel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 07:34:49 by hmaciel-          #+#    #+#             */
/*   Updated: 2024/11/10 18:52:52 by hmaciel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

void run_ft_list_push_front_tests()
{
   t_list *list = NULL;
   char* data = NULL;

   // Test 1: null list
   ft_list_push_front(&list, "first");
   assert(strcmp(list->data, "first") == 0 && ft_list_size(list) == 1);

   // Test 2: list with data null
   ft_list_push_front(&list, data);
   assert(strcmp(list->data, "first") == 0 && ft_list_size(list) == 1);

   // Test 3: list with data not null
   ft_list_push_front(&list, "second");
   assert(strcmp(list->data, "second") == 0 && ft_list_size(list) == 2);

   // Test 4: list with data not null
   ft_list_push_front(&list, "third");
   assert(strcmp(list->data, "third") == 0 && ft_list_size(list) == 3);

   // Test 5: list with data not null
   ft_list_push_front(&list, "fourth");
   assert(strcmp(list->data, "fourth") == 0 && ft_list_size(list) == 4);

   // Test 6: list with data not null
   ft_list_push_front(&list, "fifth");
   assert(strcmp(list->data, "fifth") == 0 && ft_list_size(list) == 5);

   // Test 7: list with data not null
   ft_list_push_front(&list, "sixth");
   assert(strcmp(list->data, "sixth") == 0 && ft_list_size(list) == 6);

   print_list(list);


   free_list(list);

   printf("%s\nAll ft_list_push_front tests passed successfully!%s\n", GREEN, RESET);
   
}