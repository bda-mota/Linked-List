/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   doubly_lk_lst.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bda-mota <bda-mota@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 12:52:13 by bda-mota          #+#    #+#             */
/*   Updated: 2023/11/08 14:53:03 by bda-mota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"
// we can access from the beginning or from the end the lk list

/*int	main(void)
{
	t_dNode	*tail;
	t_dNode	*curr;
	t_dNode	*head;

	tail = malloc(sizeof(t_dNode));
	if (!tail)
		return (1);
	tail->x = 1;
	tail->prev = NULL;
	tail->next = malloc(sizeof(t_dNode));
	if (!tail->next)
		return (2);
	tail->next->x = 3;
	tail->next->prev = tail;
	tail->next->next = malloc(sizeof(t_dNode));
	if (!tail->next->next)
		return (3);
	tail->next->next->x = 7;
	tail->next->next->prev = tail->next;
	tail->next->next->next = NULL;
	head = tail->next->next;
	curr = head;
	while (curr != NULL)
	{
		printf("%d\n", curr->x);
		curr = curr->prev;
	}
	return (0);
}*/
