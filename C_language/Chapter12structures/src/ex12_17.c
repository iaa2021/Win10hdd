#include "config.h"
#include "stdio.h"
#include "string.h"
#include "stdlib.h"
struct treeNode{
    char *data;
    struct treeNode *left;
    struct treeNode *right;
} *root = NULL;
void insert(struct treeNode **, char *);
void inorder(struct treeNode *);
void preorder(struct treeNode *);
void postorder(struct treeNode *);
int main()
{
    printf( "Project version is %d", (PROJECT_VERSION_MAJOR) );
    printf( ".%d", PROJECT_VERSION_MINOR );
    printf( ".%d", PROJECT_VERSION_PATCH );
    printf( "\nEx 12.15, string tree.\n" );
    char text[] = " A null-terminated string containing a set of characters, which used as dls.";
    const char delims[] = " ,.-";
    char *token = strtok(text, delims);
    while(token != NULL){
        insert(&root, token);
        printf("%s, ", token);
        token = strtok(NULL, delims);
    }  
    printf("\nOrdered tokens are:\n");
    if(root == NULL)
    printf("\nTree is empty.");
    printf("\nInordered tokens are:\n");
    inorder(root);
    printf("\nPostordered tokens are:\n");
    postorder(root);
    printf("\nPreordered tokens are:\n");
    preorder(root);
    printf("\nEnd of run.\n");
    return 0;
}
void insert(struct treeNode **root, char *value){
    if(*root == NULL){
        *root = malloc(sizeof(struct treeNode));
        if(*root != NULL){
        (*root) ->left = NULL;
        (*root) ->right = NULL;
        (*root) ->data = value;
        }
        else
        printf("\nNo memory allocated.\n");
    }
        else{
            if(strcmp(value, (*root) ->data) < 0)
            insert(&((*root) ->left), value);
            else
            insert(&((*root) ->right), value);
        }
}
void inorder(struct treeNode *root){
    if(root != NULL){
    inorder(root ->left);
    printf("%s, ", root ->data);
    inorder(root ->right);
    }
}
void postorder(struct treeNode *root){
    if(root != NULL){
    postorder(root ->left);
    postorder(root ->right);
    printf("%s, ", root ->data);
    }
}
void preorder(struct treeNode *root){
    if(root != NULL){
    printf("%s, ", root ->data);
    preorder(root ->left);
    preorder(root ->right);
    }
}