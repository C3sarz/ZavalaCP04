/**********************************************
* Name: Cesar Zavala *
* Date: 10/06/2019 *
* Assignment: Project 4 – Binary Treee Deletion *
***********************************************
* Provides functionality of a binary search tree node deletion. *
***********************************************/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "bst.h"
#define DEBUG 1

/**********************************************
* Description: * Main function.
* Input: *
* Output: *
***********************************************/
int main() {
    Tree *BinaryTree;
    BinaryTree = malloc(sizeof(struct node));
    BinaryTree = NULL;

    ///DEBUG
if (DEBUG)
{
    Insert(&BinaryTree, 5);
    Insert(&BinaryTree, 2);
    Insert(&BinaryTree, 12);
    Insert(&BinaryTree, -4);
    Insert(&BinaryTree, 3);
    Insert(&BinaryTree, 9);
    Insert(&BinaryTree, 21);
    Insert(&BinaryTree, 19);
    Insert(&BinaryTree, 25);
}
    ///DEBUG

    ////START MAIN LOOP
    int escape = 0;
    while (escape == 0) {
        escape = Prompt(&BinaryTree);
    }
    ////END MAIN LOOP
    return 33;
}