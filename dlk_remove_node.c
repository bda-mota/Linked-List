/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dlk_remove_node.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bda-mota <bda-mota@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 14:05:21 by bda-mota          #+#    #+#             */
/*   Updated: 2023/11/13 14:05:32 by bda-mota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	dlk_remove_node(t_dNode *node)
{
	if (node->prev != NULL)
		node->prev->next = node->next;
	if (node->next != NULL)
		node->next->prev = node->prev;
	free (node);
}

/*int	main(void)
{
	t_dNode	*tail;
	t_dNode	*curr;
	t_dNode	*head;
    t_dNode *aux; //if we wanted remove tail or head

	tail = NULL;
    head = NULL;
    init (&tail, &head, 7);
	dlk_insert_beginning(&tail, 3);
    dlk_insert_beginning(&tail, 1);
    aux = tail->next;
    dlk_remove_node(tail); //removing tail
    tail = aux;
	curr = tail;
	while (curr != NULL)
	{
		printf("%d\n", curr->x);
		curr = curr->next;
	}
    deallocate_doubly(&tail, &head);
	return (0);
}*/
