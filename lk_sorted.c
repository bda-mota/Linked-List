/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorted.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bda-mota <bda-mota@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 17:33:36 by bda-mota          #+#    #+#             */
/*   Updated: 2023/11/07 18:51:26 by bda-mota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	insert_sorted(t_Node **root, int value)
{
	t_Node	*curr;

	if (!*root || (*root)->x >= value)
	{
		insert_beginning(root, value);
		return ;
	}
	curr = *root;
	while (curr->next != NULL)
	{
		if (curr->next->x >= value)
		{
			insert_after(curr, value);
			return ;
		}
		curr = curr->next;
	}
	insert_after(curr, value);
}
/*
int main(void)
{
	t_Node	*root;
	t_Node	*curr;

	root = NULL;
	insert_end(&root, 0);
	insert_end(&root, 2);
	insert_sorted(&root, -1);
	insert_sorted(&root, 1);
	insert_sorted(&root, 3);
	curr = root;
	while (curr)
	{
		printf("%d\n", curr->x);
		curr = curr->next;
	}
	return (0);
}*/
