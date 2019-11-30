/**********************************************
* Name: Cesar Zavala *
* Date: 10/06/2019 *
* Assignment: Project 4 – Binary Tree Deletion *
***********************************************
* Provides functionality of a binary search tree node deletion. *
***********************************************/
#include "io.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char DisplayMainPrompt() {
    printf("Enter (i)nstert, (s)earch, inorder (t)raversal, (d)elete, or (q)uit: ");
    char input[20];
    scanf("%s", input);
    return input[0];
}

int SecondaryPrompts(int type, int data) {
    int result;
    if (type == 1) {
        printf("\nEnter a number to insert:");
        scanf("%d", &result);
        getchar();
        return result;
    }
    else if (type == 2) {
        printf("\nEnter a number to search:");
        scanf("%d", &result);
        getchar();
        return result;
    }
    else if (type == 3) {
        printf("%d is in the tree\n", data);
    }
    else if (type == 4) {
        printf("%d is NOT in the tree\n", data);
    }
    else if (type == 5) {
        printf("\nEnter a number to delete: ");
        scanf("%d", &result);
        getchar();
        return result;
    }
}


