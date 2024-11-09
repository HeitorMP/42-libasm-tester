/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tester.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaciel- <hmaciel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 23:34:56 by hmaciel-          #+#    #+#             */
/*   Updated: 2024/11/08 23:34:58 by hmaciel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

// t_list *create_node(void *data) {
//     t_list *new_node = malloc(sizeof(t_list));
//     new_node->data = data;
//     new_node->next = NULL;
//     return new_node;
// }

// void append(t_list **head, void *data) {
//     t_list *new_node = create_node(data);
//     if (*head == NULL) {
//         *head = new_node;
//     } else {
//         t_list *current = *head;
//         while (current->next != NULL) {
//             current = current->next;
//         }
//         current->next = new_node;
//     }
// }

// void    my_free(void *node)
// {
//     t_list *current = (t_list*)node;
//     (void)current;

//     printf("\ndata to delete: %s\n", (char*)current->data);

//     if (current)
//     {
//         free(current);
//     }
// }

// void print_list(t_list *head) {
//     t_list *current = head;
//     int i = 0;
//     while (current != NULL) {
//         printf("Node %d - %s\n", i, (char*)current->data);
//         current = current->next;
//         i++;
//     }
// }

int main() {
    printf("=======================================================\n");
    printf("                        FT_STRLEN                      \n");
    printf("=======================================================\n\n");
    run_ft_strlen_tests();

    printf("=======================================================\n");
    printf("                        FT_STRCPY                      \n");
    printf("=======================================================\n\n");
    run_ft_strcpy_tests();

    printf("=======================================================\n");
    printf("                        FT_STRCMP                      \n");
    printf("=======================================================\n\n");
    run_ft_strcmp_tests();

    printf("=======================================================\n");
    printf("                        FT_STRDUP                      \n");
    printf("=======================================================\n\n");
    run_ft_strdup_tests();

    printf("=======================================================\n");
    printf("                        FT_WRITE                       \n");
    printf("=======================================================\n\n");
    run_ft_write_tests();

    printf("=======================================================\n");
    printf("                        FT_READ                        \n");
    printf("=======================================================\n\n");
    run_ft_read_tests();

    printf("=======================================================\n");
    printf("                        FT_ATOI_BASE                   \n");
    printf("=======================================================\n\n");

    run_ft_atoi_base_tests();

    return 0;
}
