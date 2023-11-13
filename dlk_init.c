/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dlk_init.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bda-mota <bda-mota@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 14:02:56 by bda-mota          #+#    #+#             */
/*   Updated: 2023/11/13 14:03:42 by bda-mota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	init(t_dNode **tail, t_dNode **head, int value)
{
	t_dNode	*new_node;

	new_node = malloc(sizeof(t_dNode));
	if (!new_node)
		return ;
	new_node->x = value;
	new_node->next = NULL;
	new_node->prev = NULL;
	*tail = new_node;
	*head = new_node;
}
