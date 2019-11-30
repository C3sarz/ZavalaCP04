/**********************************************
* Name: Cesar Zavala *
* Date: 10/06/2019 *
* Assignment: Project 2 – Binary Trees *
***********************************************
* BST header file. *
***********************************************/
// Created by Cesar Zavala on 10/5/2019.


#ifndef ZAVALACP02_BST_H
#define ZAVALACP02_BST_H


typedef struct node {
    int key;
    struct node *LeftNode;
    struct node *RightNode;
} Tree;

void Initialize(struct node *root, int data);

void Insert(Tree **root, int data);

int Search(Tree *root, int data);

void Traversal(Tree *root);

void ReleaseAllNodes(Tree *root);

int Prompt(Tree **BinaryTree);

int Delete(Tree **root, int data);

#endif //ZAVALACP02_IO_H
