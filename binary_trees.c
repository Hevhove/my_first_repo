/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   binary_trees.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hvan-hov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 15:16:48 by hvan-hov          #+#    #+#             */
/*   Updated: 2021/10/21 17:45:48 by hvan-hov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

struct node {
	int data; // data associated with the tree
	struct node* left; // left child node
	struct node* right; // right child node
};

// newNode is a function that returns a new node with given data
struct node* newNode (int data)
{
	struct node* node = (struct node*)malloc(sizeof(struct node));

	// assign data to this node
	node->data = data;

	// Initialize left and right children as NULL
	node->left = NULL;
	node->right = NULL;
	return (node);
}

int main()
{
	struct node* root = newNode(1);

	root->left = newNode(2);
	root->right = newNode(3);

	root->left->left = newNode(4);

	getchar();
	return 0;
}
