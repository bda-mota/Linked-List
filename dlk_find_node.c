/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dlk_find_node.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bda-mota <bda-mota@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 14:02:48 by bda-mota          #+#    #+#             */
/*   Updated: 2023/11/13 14:02:51 by bda-mota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

t_dNode	*dlk_find_node(t_dNode *tail, int value)
{
	t_dNode	*curr;

	curr = tail;
	while (curr != NULL)
	{
		if (curr->x == value)
			return (curr);
		curr = curr->next;
	}
	return (NULL);
}

//recursive

t_dNode	*dlk_find_node_recursive(t_dNode *node, int value)
{
	if (node == NULL)
		return (NULL);
	if (node->x == value)
		return (node);
	else
		return (dlk_find_node_recursive(node->next, value));
}

/*int	main(void)
{
	t_dNode	*tail;
	t_dNode	*curr;
	t_dNode	*head;
	t_dNode	*found;

	tail = NULL;
    head = NULL;
    init (&tail, &head, 7);
	dlk_insert_beginning(&tail, 3);
    dlk_insert_beginning(&tail, 1);
	found = dlk_find_node_recursive(tail, 5);
	if (found == NULL)
		printf("No node was found.\n");
	else
		printf("value:%d\nnext:%d\n", found->x, found->next);
	curr = tail;
	while (curr != NULL)
	{
		printf("%d\n", curr->x);
		curr = curr->next;
	}
    deallocate_doubly(&tail, &head);
	return (0);
}*/
