/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insert_after.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bda-mota <bda-mota@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 17:18:36 by bda-mota          #+#    #+#             */
/*   Updated: 2023/11/07 18:29:33 by bda-mota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	insert_after(t_Node *node, int value)
{
	t_Node	*new_node;

	new_node = malloc(sizeof(t_Node));
	if (!new_node)
		return ;
	new_node->x = value;
	new_node->next = node->next;
	node->next = new_node;
}
/*
int	main(void)
{
	t_Node	*root;
	t_Node	*curr;

	root = NULL;
	insert_end(&root, 1);
	insert_end(&root, 2);
	insert_end(&root, 4);
	insert_end(&root, 5);
	insert_after(root->next, 3);

	curr = root;
	while (curr)
	{
		printf("%d\n", curr->x);
		curr = curr->next;
	}
	deallocate(&root);
	return (0);
}*/
