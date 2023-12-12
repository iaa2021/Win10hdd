#include "config.h"
#include "stdio.h"
#include "string.h"
#include "stdlib.h"
#include "time.h"
struct listNode{
    int data;
    struct listNode *next;
} *root = NULL;
void insert(struct listNode **, int);
void delete(struct listNode **, int);
int isEmpty(struct listNode *);
void print(struct listNode *);
void recursivePrint(struct listNode *);
int main(){
    printf( "Project version is %d", (PROJECT_VERSION_MAJOR) );
    printf( ".%d", PROJECT_VERSION_MINOR );
    printf( ".%d", PROJECT_VERSION_PATCH );
    printf( "\nEx 12.20, recursive function, of list's reverce print.\n" );
    int choice, value;
    printf("\nInput your choice, 1 - input value; 2 - delete value; 3 - print list;\
    4 -recursive print list; 5 - stop.\n");
    scanf("%d", &choice);
    while(choice != 5){
        switch(choice){
            case 1:
            printf("\nEnter value to input:\n");
            scanf("%d", &value);
            insert(&root, value);
            print(root);
            break;
            case 2:
            printf("\nInput value to delete:\n");
            scanf("%d", &value);
            delete(&root, value);
            print(root);
            break;
            case 3:
            print(root);
            break;
            case 4:
            recursivePrint(root);
            break;
            default:
            printf("\nYou've entered wrong choice.\n");
            break;
        }
        printf("\nInput your choice, 1 - input value; 2 - delete value; 3 - print list;\
        4 -recursive print list; 5 - stop.\n");
        scanf("%d", &choice);
    }
    printf("\nEnd of run.\n");
    return 0;
}
void insert(struct listNode **root, int value){
    struct listNode *new, *current, *previous;
    new = malloc(sizeof(struct listNode));
    if(new != NULL){
        new ->data = value;
        new ->next = NULL;
        previous = NULL;
        current = *root;
        while(current != NULL && value > current ->data){
            previous = current;
            current = current ->next;
        }
        if(previous == NULL){/*if list is empty*/
            new ->next = *root;
            *root = new;
        }
        else{
            previous ->next = new;
            new ->next = current;
        }
    }
    else
    printf("\nNo memory allowed.\n");
}
int isEmpty(struct listNode *root){
    return root == NULL;
}
void delete(struct listNode **root, int value){
    struct listNode *temp, *current, *previous;
    current = *root;
    if(isEmpty(*root))
    printf("\nThe list is empty.\n");
    else{
        if((*root) ->data == value)
        {
            temp = *root;
            *root = (*root) ->next;
            free(temp);
        }
        else{
            previous = *root;
            current = (*root) ->next;/*first step*/
            while(current ->data != value && current != NULL){/*traversal ascross list*/
            previous = current;
            current = current ->next;
        }
        if(current ->data == value){
            temp = current;
            previous ->next = current ->next;
            free(temp);
        }
        if(current ->data == value && current == NULL){
            printf("\nThere isn't such value %d in the list.\n", value);
        }
        }
    }
}
void print(struct listNode *root){
    if(root == NULL)
    printf("\nThe list is empty.\n");
    else{
        printf("\nThe list is: |n");
        while(root != NULL){
            printf("%d -> ", root ->data);
            root = root ->next;
        }
        printf("NULL");
    }
}
void recursivePrint(struct listNode *root){
    if(root != NULL){
    recursivePrint(root ->next);
    printf("%d -> ",root ->data);
    }
}