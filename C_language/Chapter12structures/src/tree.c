#include "config.h"
#include "stdio.h"
#include "stdlib.h"
#include "time.h"
struct treeNode{
    struct treeNode *left;
    struct treeNode *right;
    int data;
} *root = NULL;
typedef struct treeNode TREENODE;
typedef struct treeNode* TREENODEPTR;
void insert(TREENODEPTR *, int);
void inorder(TREENODEPTR);
void preorder(TREENODEPTR);
void postorder(TREENODEPTR);

int main()
{
    printf( "Project version is %d", (PROJECT_VERSION_MAJOR) );
    printf( ".%d", PROJECT_VERSION_MINOR );
    printf( ".%d", PROJECT_VERSION_PATCH );
    printf( "\nCreation of tree, p.552.\n" );
    int i, item;
    srand(time(NULL));
    printf("\nThe numbers, being placed in tree, are:\n");
    for( i = 0; i < 10; i++)
    {
        item = rand()%150 + 1;
        printf("%d, ", item);
        insert(&root, item);
    }
    printf("\nPre order traversal:\n");
    preorder(root);
    printf("\nIn order traversal:\n");
    inorder(root);
    printf("\nPostorder traversal:\n");
    postorder(root);
    printf("\n");
    return 0;
}
void insert(TREENODEPTR *root, int value){
    if(*root == NULL){
    *root = malloc(sizeof(TREENODE));
    if(*root != NULL){
        (*root) ->data = value;
        (*root) ->left = NULL;
        (*root) ->right = NULL;
    }
    else
    printf("\n%d not inserted, memory not allocated.\n");
    }
    else{
        if(value < (*root) ->data)
        insert(&((*root) ->left), value);
        else if(value > (*root) ->data)
        insert(&((*root) ->right), value);
        else
        printf("\nDuplicate.\n");
    }
}
void inorder(TREENODEPTR root){
    if(root != NULL){
    inorder(root -> left);
    printf("%3d, ", root ->data);
    inorder(root -> right);
    }
}
void preorder(TREENODEPTR root){
    if(root != NULL){
    printf("%3d, ", root ->data);
    preorder(root -> left);
    preorder(root -> right);
    }
}
void postorder(TREENODEPTR root){
    if(root != NULL){
    preorder(root -> left);
    preorder(root -> right);
    printf("%3d, ", root ->data);
    }
}