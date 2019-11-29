/**********************************************
* Name: Cesar Zavala *
* Date: 10/06/2019 *
* Assignment: Project 4 – Binary Treee Deletion *
***********************************************
* Provides functionality of a binary search tree node deletion. *
***********************************************/
#include "bst.h"
#include "io.h"
#include <stdio.h>
#include <stdlib.h>
//typedef struct node{
//    int key;
//    struct node * LeftNode;
//    struct node * RightNode;
//}Tree;


void Initialize(struct node *root, int data) {
    root->key = data;
    root->RightNode = NULL;
    root->LeftNode = NULL;
}

///Manages the insertion to the tree.
void Insert(Tree **root, int data) {
    if ((*root) == NULL) {
        Tree *newBranch;
        newBranch = malloc(sizeof(Tree));
        Initialize(newBranch, data);
        (*root) = newBranch;
        return;
    }
    if ((*root)->key == data) {
        return;   //Equality scenario
    }

    if (data > (*root)->key) {   ///Dealing with RIGHT BRANCH
        if ((*root)->RightNode != NULL) {
            Insert(&(*root)->RightNode, data); //recursive
        } else {
            Tree *newBranch;
            newBranch = malloc(sizeof(Tree));
            Initialize(newBranch, data);
            (*root)->RightNode = newBranch;
        }
    } else if (data < (*root)->key) {   ///Dealing with LEFT BRANCH
        if ((*root)->LeftNode != NULL) {
            Insert(&(*root)->LeftNode, data);
        } else {
            Tree *newBranch;
            newBranch = malloc(sizeof(Tree));
            Initialize(newBranch, data);
            (*root)->LeftNode = newBranch;
        }
    }
}

int Search(Tree *root, int data) {
    if (root->key == data) return 1;
    int status = 0;

    if (data > root->key) {      ///Right branch search.
        if (root->RightNode != NULL) {
            status = Search(root->RightNode, data);
        } else return 0;
    } else if (data < root->key) {      ///Left branch search.
        if (root->LeftNode != NULL) {
            status = Search(root->LeftNode, data);
        } else return 0;
    }
    return status;
}

void Traversal(Tree *root) {
    if (root->LeftNode != NULL) {
        Traversal(root->LeftNode);
    }
    printf("%d ", root->key);
    if (root->RightNode != NULL) {
        Traversal(root->RightNode);
    }
}

void ReleaseAllNodes(Tree *root) {
    if (root->RightNode != NULL) ReleaseAllNodes(root->RightNode);
    if (root->LeftNode != NULL) ReleaseAllNodes(root->LeftNode);
    free(root);
}

int Prompt(Tree **BinaryTree) {
    int data;
    switch (DisplayMainPrompt()) {
        case 'i':
            data = SecondaryPrompts(1, 0);
            Insert(BinaryTree, data);
            printf("\n");
            break;

        case 's':
            data = SecondaryPrompts(2, 0);

            int status = Search(*BinaryTree, data);
            if (status == 1) SecondaryPrompts(3, data);
            else SecondaryPrompts(4, data);
            break;

        case 't':
            printf("\n");
            Traversal(*BinaryTree);
            printf("\n");
            break;

        case 'q':
            ReleaseAllNodes(*BinaryTree);
            return 1;
            break;

        default:
            return 0;

    } //end switch
    return 0;
}

void Delete(Tree *root, int data)
{

}