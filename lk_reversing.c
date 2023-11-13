/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reversing.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bda-mota <bda-mota@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 19:22:48 by bda-mota          #+#    #+#             */
/*   Updated: 2023/11/07 19:48:16 by bda-mota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	reverse(t_Node **root)
{
	t_Node	*prev;
	t_Node	*curr;
	t_Node	*next;

	prev = NULL;
	curr = *root;
	while (curr != NULL)
	{
		next = curr->next;
		curr->next = prev;
		prev = curr;
		curr = next;
	}
	*root = prev;
}
/*
int	main()
{
	t_Node	*root;
	t_Node	*curr;

	root = NULL;
	insert_end(&root, 1);
	insert_end(&root, 3);
	insert_end(&root, 6);

	reverse(&root);
	curr = root;
	while (curr != NULL)
	{
		printf("%d\n", curr->x);
		curr = curr->next;
	}
	deallocate(&root);
	return (0);
}*/

