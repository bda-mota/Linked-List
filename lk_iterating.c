/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iterating.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bda-mota <bda-mota@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 16:59:27 by bda-mota          #+#    #+#             */
/*   Updated: 2023/11/07 16:55:17 by bda-mota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

/*ARRAYS
	start: i = 0;
	while: i < n;
	increment: i++;
*/

/*LINKED LIST
	start: curr = &root;
	while: curr->next != NULL;
	increment: curr = curr->next;
*/

/*
int	main(int argc, char const *argv[])
{
	t_Node	root;
	t_Node	*curr;

	root.x = 15;
	root.next = malloc(sizeof(t_Node));
	root.next->x = 9;
	root.next->next = malloc(sizeof(t_Node));
	root.next->next->x = -2;
	root.next->next->next = NULL;

	curr = &root;
	while (curr != NULL)
	{
		printf("%d\n", curr->x);
		curr = curr->next;
	}

	free(root.next);
	free(root.next->next);
	return (0);
}
*/
