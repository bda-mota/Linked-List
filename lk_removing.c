/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   removing.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bda-mota <bda-mota@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 18:52:41 by bda-mota          #+#    #+#             */
/*   Updated: 2023/11/07 19:22:06 by bda-mota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	remove_element(t_Node **root, int value)
{
	t_Node	*curr;
	t_Node	*aux;

	if (!*root)
		return ;
	if ((*root)->x == value)
	{
		aux = *root;
		*root = (*root)->next;
		free(aux);
		return ;
	}
	curr = *root;
	while (curr)
	{
		if (curr->next->x == value)
		{
			aux = curr->next;
			curr->next = curr->next->next;
			free(aux);
		}
		curr = curr->next;
	}
}
/*
int	main(void)
{
	t_Node	*root;
	t_Node	*curr;

	root = NULL;
	insert_sorted(&root, 1);
	insert_sorted(&root, 1);
	insert_sorted(&root, 3);
	insert_sorted(&root, 6);

	remove_element(&root, 1);
	curr = root;
	while (curr)
	{
		printf("%d\n", curr->x);
		curr = curr->next;
	}
	return (0);
}*/
