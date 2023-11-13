/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   deallocating.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bda-mota <bda-mota@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 18:48:47 by bda-mota          #+#    #+#             */
/*   Updated: 2023/11/06 21:02:28 by bda-mota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	deallocate(t_Node **root)
{
	t_Node	*curr;
	t_Node	*aux;

	curr = *root;
	while (curr != NULL)
	{
		aux = curr;
		curr = curr->next;
		free(aux);
	}
	*root = NULL;
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
	deallocate(&root);

	return (0);
}*/

/*	verify liq of memory

#define _CRTDBG_MAP_ALLOC
#include <stdlib.h>


chamar _CrtDumpMemoryLeaks();*/
