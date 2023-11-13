/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dlk_reversing.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bda-mota <bda-mota@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 14:05:44 by bda-mota          #+#    #+#             */
/*   Updated: 2023/11/13 14:06:28 by bda-mota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "header.h"

void	dlk_reverse(t_dNode **tail, t_dNode **head)
{
	t_dNode	*curr;
	t_dNode	*next;
	t_dNode	*aux;

	curr = *tail;
	while (curr != NULL)
	{
		next = curr->next;
		curr->next = curr->prev;
		curr->prev = next;
		curr = next;
}
	aux = *tail;
	*tail = *head;
	*head = aux;
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
    dlk_reverse(&tail, &head);
	curr = tail;
	while (curr != NULL)
	{
		printf("%d\n", curr->x);
		curr = curr->next;
	}
    deallocate_doubly(&tail, &head);
	return (0);
}*/
