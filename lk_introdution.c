/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   introdution.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bda-mota <bda-mota@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 16:46:13 by bda-mota          #+#    #+#             */
/*   Updated: 2023/11/07 16:55:52 by bda-mota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

/*x: content of the list;
next: a pointer for the next element of the list.

we can criate this way too:

typedef struct t_Node
{
	int		x;
	t_Node	*next;
}	t_Node;*/

/*
int	main(int argc, char const *argv[])
{
	t_Node	root;
	t_Node	elem2;

	root.x = 15;
	root.next = malloc(sizeof(t_Node));
	elem2.x = 9; //root.next->x = 9;
	elem2.next = NULL; // root.next->next = NULL;
	printf("first: %d\n", root.x);
	printf("second: %d\n", root.next->x);

	free(root.next); // allocated dinamically
	return (0);
}
*/
/*
"." we use to attribute a value to the variable of the struct
"->" we use to attribute or access a value to the variable that is located in other archive

To avoid have liquid of memory in our code we have to free the memory we have allocated dinamically
*/
