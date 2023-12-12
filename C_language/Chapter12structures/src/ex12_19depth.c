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
} *root = NULL;
int max = 0;
void insert(struct treeNode **, int);
void inorder(struct treeNode *);
void preorder(struct treeNode *);
void preorder1(struct treeNode **);
void postorder(struct treeNode *);
void level(struct treeNode **);/*assign levels to a tree*/
void printLevel(struct treeNode *, int);/*tree level traversal*/
void depth(struct treeNode *root);
int main()
{
    printf( "Project version is %d", (PROJECT_VERSION_MAJOR) );
    printf( ".%d", PROJECT_VERSION_MINOR );
    printf( ".%d", PROJECT_VERSION_PATCH );
    printf( "\nEx 12.19, depth function, tree levels.\n" );
    srand(time(0));
    for(int i = 0; i < 10; i++){
        int j = rand()%50 + 1;
        insert(&root, j);
    }
    if(root == NULL)
    printf("\nTree is empty.\n");
    level(&root); 
    
    depth(root);
    printf("\nTree has %d levels.\n", max);
    printf("\nInordered tree is:\n");
    inorder(root);
    printf("\nPostordered tree is:\n");
    postorder(root);
    printf("\nPreordered tree is:\n");
    preorder(root);
    printf("\nPreordered1 tree is:\n");
    preorder(root);
    printf("\nLevel ordered1 tree is:\n");
    for(int i = 1; i <= max; i++)
    {
        printLevel(root, i);

        printf("\n");
    }
    printf("\nEnd of run.\n");
    return 0;
}
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
void level(struct treeNode **root){
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
void printLevel(struct treeNode *root, int max){
        if(root != NULL){
        if((root ->level) == max)
        {printf("%d, l = %d; ", (root) ->data, (root) ->level);}

        printLevel(((root) ->left), max);
        printLevel(((root) ->right), max);
    }
}
void depth(struct treeNode *root){
    if(root != NULL){
    if(root ->level > max)
    max = root ->level;

    depth(root ->left);
    depth(root ->right);
    }
}