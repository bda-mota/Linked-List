/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dlk_insert_beginning.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bda-mota <bda-mota@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 14:03:55 by bda-mota          #+#    #+#             */
/*   Updated: 2023/11/13 14:04:26 by bda-mota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	dlk_insert_beginning(t_dNode **tail, int value)
{
	t_dNode	*new_node;

	new_node = malloc(sizeof(t_dNode));
	if (!new_node)
		return ;
	new_node->x = value;
	new_node->prev = NULL;
	new_node->next = *tail;
	if (*tail != NULL)
		(*tail)->prev = new_node;
	*tail = new_node;
}

/*int	main(void)
{
	t_dNode	*tail;
	t_dNode	*curr;
	t_dNode	*head;

	tail = NULL;
    head = NULL;
	dlk_insert_beginning(&tail, 7);
    dlk_insert_beginning(&tail, 8);
    dlk_insert_beginning(&tail, 9);
	curr = tail;
	while (curr != NULL)
	{
		printf("%d\n", curr->x);
		curr = curr->next;
	}
	return (0);
}*/
