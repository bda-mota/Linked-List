/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insert_beginning.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bda-mota <bda-mota@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 19:51:16 by bda-mota          #+#    #+#             */
/*   Updated: 2023/11/07 17:23:29 by bda-mota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	insert_beginning(t_Node **root, int value)
{
	t_Node	*new_node;

	new_node = malloc(sizeof(t_Node));
	if (!new_node)
		return ;
	new_node->x = value;
	new_node->next = *root;
	*root = new_node;
}
/*
int	main(void)
{
	t_Node	*root;
	t_Node	*curr;

	root = NULL;
	insert_beginning(&root, 1);
	insert_beginning(&root, 2);

	curr = root;
	while (curr)
	{
		printf("%d\n", curr->x);
		curr = curr->next;
	}
	deallocate(&root);
	return (0);
}
*/
