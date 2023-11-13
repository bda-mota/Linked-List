/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dlk_insert_end.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bda-mota <bda-mota@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 14:04:35 by bda-mota          #+#    #+#             */
/*   Updated: 2023/11/13 14:05:01 by bda-mota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	dlk_insert_end(t_dNode **head, int value)
{
	t_dNode	*new_node;

	new_node = malloc(sizeof(t_dNode));
	if (!new_node)
		return ;
	new_node->x = value;
	new_node->next = NULL;
	new_node->prev = *head;
	(*head)->next = new_node;
	*head = new_node;
}

/*int	main(void)
{
	t_dNode	*tail;
	t_dNode	*curr;
	t_dNode	*head;

	tail = NULL;
    head = NULL;
    init (&tail, &head, 7);
	dlk_insert_beginning(&tail, 3);
    dlk_insert_beginning(&tail, 1);
    dlk_insert_end(&head, 5);
	curr = tail;
	while (curr != NULL)
	{
		printf("%d\n", curr->x);
		curr = curr->next;
	}
    deallocate_doubly(&tail, &head);
	return (0);
}*/
