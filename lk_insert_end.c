/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   adding.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bda-mota <bda-mota@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 17:13:28 by bda-mota          #+#    #+#             */
/*   Updated: 2023/11/06 21:02:37 by bda-mota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	insert_end(t_Node **root, int value)
{
	t_Node	*curr;
	t_Node	*new_node;

	new_node = malloc(sizeof(t_Node));
	if (!new_node)
		return ;
	new_node->next = NULL;
	new_node->x = value;
	if (*root == NULL)
	{
		*root = new_node;
		return ;
	}
	curr = *root;
	while (curr->next != NULL)
	{
		curr = curr->next;
	}
	curr->next = new_node;
}
/*
int	main(int argc, char const *argv[])
{
	t_Node	*root;
	t_Node	*curr;

	root = NULL;
	insert_end(&root, 10);
	insert_end(&root, -9);
	curr = root;
	while (curr != NULL)
	{
		printf("%d\n", curr->x);
		curr = curr->next;
	}
	free(root->next);
	free(root->next->next);
	return (0);
}*/
