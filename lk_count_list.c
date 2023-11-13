/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_list.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bda-mota <bda-mota@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 20:07:04 by bda-mota          #+#    #+#             */
/*   Updated: 2023/11/08 14:29:01 by bda-mota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

//ITERATIVE
int	count_list_iterative(t_Node *root)
{
	t_Node	*curr;
	int		count;

	curr = root;
	while (curr)
	{
		count++;
		curr = curr->next;
	}
	return (count);
}

//RECURSIVE
int	count_list_recursive(t_Node *node)
{
	if (node == NULL)
		return (0);
	else
		return (1 + count_list_recursive(node->next));
}

/*int	main(void)
{
	t_Node	*root;
	t_Node	*curr;

	root = NULL;
	insert_end(&root, 0);
	insert_end(&root, 2);
	insert_end(&root, -1);
	insert_end(&root, 1);
	insert_end(&root, 3);
	curr = root;

	printf("The list has %d elements\n", count_list(root));
	while (curr)
	{
		printf("%d\n", curr->x);
		curr = curr->next;
	}
	return (0);
}*/
