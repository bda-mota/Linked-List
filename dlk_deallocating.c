/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dlk_deallocating.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bda-mota <bda-mota@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 14:52:12 by bda-mota          #+#    #+#             */
/*   Updated: 2023/11/08 18:36:18 by bda-mota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	deallocate_doubly(t_dNode **tail, t_dNode **head)
{
	t_dNode	*curr;

	if (*tail == NULL)
		return ;
	curr = *tail;
	while (curr->next != NULL)
	{
		curr = curr->next;
		free(curr->prev);
	}
	free (curr);
	*tail = NULL;
	*head = NULL;
}
/*In the main we call deallocate_doubly(&tail, &head);*/
