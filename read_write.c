/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_write.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bda-mota <bda-mota@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 14:07:44 by bda-mota          #+#    #+#             */
/*   Updated: 2023/11/13 14:46:48 by bda-mota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	serialize(t_Node *root)
{
	FILE	*file;
	t_Node	*curr;

	file = fopen("list.txt", "w");
	if (file == NULL)
		return ;
	curr = root;
	while (curr != NULL)
	{
		fprintf(file, "%d ", curr->x);
		curr = curr->next;
	}
	fclose(file);
}

void	deserialize(t_Node **root)
{
	FILE	*file;
	t_Node	*curr;
	int		val;

	file = fopen("list.txt", "r");
	if (file == NULL)
		return ;
	while (fscanf(file, "%d, ", &val) > 0)
		insert_end(root, val);
	fclose(file);
}

int	main(void)
{
	t_Node	*head;
	t_Node	*head2;
	t_Node	*curr;

	head = NULL;
	head2 = NULL;
	insert_end(&head, -2);
	insert_end(&head, 11);
	insert_end(&head, 9);
	serialize(head);
	deserialize(&head2);
	curr = head2;
	while (curr != NULL)
	{
		printf("%d\n", curr->x);
		curr = curr->next;
	}
	deallocate(&head);
	deallocate(&head2);
	return (0);
}
