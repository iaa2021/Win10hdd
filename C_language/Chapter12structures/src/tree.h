#ifndef TREE_H
#define TREE_H
#include "config.h"
#include "stdio.h"
#include "string.h"
#include "stdlib.h"
#include "time.h"
struct treeNode{
    int data;
    int level;
    struct treeNode *left;
    struct treeNode *right;
    struct treeNode *parent;
};
int max = 0;
void insert(struct treeNode **root, int value){
    if(*root == NULL){
        *root = malloc(sizeof(struct treeNode));
        if(*root != NULL){
        (*root) ->left = NULL;
        (*root) ->right = NULL;
        (*root) ->parent = NULL;
        (*root) ->data = value;
        (*root) ->level = 1;
        }
        else
        printf("\nNo memory allocated.\n");
    }
        else{
            if(value < (*root) ->data)
            insert(&((*root) ->left), value);
            else if(value > (*root) ->data)
            insert(&((*root) ->right), value);
            else
            printf("\nIt's dup.\n");
        }
}
void inorder(struct treeNode *root){
    if(root != NULL){
    inorder(root ->left);
    printf("%d, level = %d\n", root ->data, root ->level);
    inorder(root ->right);
    }
}
void postorder(struct treeNode *root){
    if(root != NULL){
    postorder(root ->left);
    postorder(root ->right);
    printf("%d, ", root ->data);
    }
}
void preorder(struct treeNode *root){
    if(root != NULL){
    printf("%d, level = %d\n", root ->data, root ->level);
    preorder(root ->left);
    preorder(root ->right);
    }
}
void preLevel(struct treeNode *root){/*set tree levels to null*/
    if(root != NULL){
    root ->level = 0;
    preLevel(root ->left);
    preLevel(root ->right);
    }
}
void level(struct treeNode **root){/*marking tree levels*/
    if(*root != NULL){
        if((*root) ->left != NULL){
        ((*root) ->left) ->level = 1 + (*root) ->level;
        ((*root) ->left) ->parent = *root;
        }
        if((*root) ->right != NULL){
        ((*root) ->right) ->level = 1 + (*root) ->level;
        ((*root) ->right) ->parent = *root;
        }
        level(&((*root) ->left));
        level(&((*root) ->right));
    }
}
void preorder1(struct treeNode **root){
    if(*root != NULL){
    printf("%d, level = %d\n", (*root) ->data, (*root) ->level);
    preorder1(&((*root) ->left));
    preorder1(&((*root) ->right));
    }
}
void printLevel(struct treeNode *root, int max){/*tree output via levels*/
        if(root != NULL){
        if((root ->level) == max)
        {printf("%d, l = %d; ", (root) ->data, (root) ->level);}

        printLevel(((root) ->left), max);
        printLevel(((root) ->right), max);
    }
}
void depth(struct treeNode *root){/*finding out level number*/
    if(root != NULL){
    if(root ->level > max)
    max = root ->level;

    depth(root ->left);
    depth(root ->right);
    }
}
struct treeNode *binaryTreeSearch(struct treeNode **root, int value){
    if((*root) != NULL){
        if(value > (*root) ->data)
        binaryTreeSearch(&((*root) ->right), value);
        else if(value < (*root) ->data)
        binaryTreeSearch(&((*root) ->left), value);
        else{
            printf("\n%d is located in %d level.\n", (*root) ->data, (*root) ->level);
            return *root;
        }   
    }
    else{
        printf("\n%d is absent.\n", (*root) ->data);
        return NULL;
    } 
}
void deleteNode(struct treeNode *root, int value){
    if(root != NULL){
        struct treeNode *temp;
        if(value > root ->data)
        deleteNode(root ->right, value);
        else if(value < root ->data)
        deleteNode(root ->left, value);
        else{
            temp = root;
            if(root ->left == NULL && root ->right == NULL){/*root is a leaf*/
            if((root ->parent) -> left == root)/*root is left child*/
            (root ->parent) ->left = NULL;
            else if((root ->parent) -> right == root)/*root is right child*/
            (root ->parent) ->right = NULL;
            free(temp);
            }
            else if(root ->right !=NULL && root ->left == NULL){/*root has only right child*/
            if((root ->parent) -> left == root)/*root is left child*/
            (root ->parent) ->left = root ->right;
            
            else if((root ->parent) -> right == root)/*root is right child*/
            (root ->parent) ->right = root ->right;
            
            free(temp);
            }
            else if(root ->right ==NULL && root ->left != NULL){/*root has only left child*/
            if((root ->parent) -> left == root)/*root is left child*/
            (root ->parent) ->left = root ->left;
            else if((root ->parent) -> right == root)/*root is right child*/
            (root ->parent) ->right = root ->left;

            free(temp);
            }
        }
    }
}
#endif