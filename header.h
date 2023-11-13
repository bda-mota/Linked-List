/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bda-mota <bda-mota@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 20:07:18 by bda-mota          #+#    #+#             */
/*   Updated: 2023/11/13 14:06:56 by bda-mota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H
# include <stdio.h>
# include <stdlib.h>

typedef struct t_Node
{
	int				x;
	struct t_Node	*next;
}	t_Node;

void	insert_end(t_Node **root, int value);
void	insert_beginning(t_Node **root, int value);
void	deallocate(t_Node **root);
void	insert_after(t_Node *node, int value);
void	insert_sorted(t_Node **root, int value);
void	remove_element(t_Node **root, int value);
void	reverse(t_Node **root);
int		has_loops(t_Node *root);

//DOUBLY LINKED LISTS
typedef struct t_dNode
{
	int				x;
	struct t_dNode	*next;
	struct t_dNode	*prev;
}	t_dNode;

void	deallocate_doubly(t_dNode **tail, t_dNode **head);
void	dlk_insert_beginning(t_dNode **tail, int value);
void	init(t_dNode **tail, t_dNode **head, int value);
void	dlk_insert_end(t_dNode **head, int value);
void	dlk_insert_after(t_dNode *node, int value);
void	dlk_remove_node(t_dNode *node);
t_dNode	*dlk_find_node(t_dNode *tail, int value);
t_dNode	*dlk_find_node_recursive(t_dNode *node, int value);
void	dlk_reverse(t_dNode **tail, t_dNode **head);

#endif
