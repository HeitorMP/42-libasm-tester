/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaciel- <hmaciel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 08:03:49 by hmaciel-          #+#    #+#             */
/*   Updated: 2024/11/09 17:18:33 by hmaciel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

void ft_list_create_new(t_list **list, void *data) {
    t_list *new;

    new = malloc(sizeof(t_list));
    if (!new)
        return;
    new->data = data;
    new->next = *list;
    *list = new;
}

void ft_list_push_back(t_list **list, void *data) {
    t_list *tmp;

    if (!*list) {
        ft_list_create_new(list, data);
        return;
    }
    tmp = *list;
    while (tmp->next)
        tmp = tmp->next;
    ft_list_create_new(&tmp->next, data);
}

void free_list(t_list *list) {
    t_list *tmp;

    while (list) {
        tmp = list;
        list = list->next;
        free(tmp);
    }
}

void print_list(t_list *list) {
    while (list) {
        printf("%s\n", (char *)list->data);
        list = list->next;
    }
}

