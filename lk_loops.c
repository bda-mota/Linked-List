/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   loops.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bda-mota <bda-mota@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 19:55:12 by bda-mota          #+#    #+#             */
/*   Updated: 2023/11/07 20:05:14 by bda-mota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	has_loops(t_Node *root)
{
	t_Node	*slow;
	t_Node	*fast;

	slow = root;
	fast = root;
	while (slow != NULL && fast != NULL && fast->next != NULL)
	{
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast)
			return (1);
	}
	return (0);
}
/*
int	main()
{
	t_Node	*root;
	t_Node	*curr;

	root = NULL;
	insert_end(&root, 1);
	insert_end(&root, 1);
	insert_end(&root, 3);
	insert_end(&root, 6);
	insert_end(&root, 7);

	root->next->next->next->next->next = root->next;

	if (has_loops(root) == 1)
	{
		printf("Has loops");
		return (1);
	}
	return (0);
}*/
