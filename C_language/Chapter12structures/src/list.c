#include "config.h"
#include "stdio.h"
#include "stdlib.h"
struct listNode{
    char data;
    struct listNode *nextPtr;
} *start = NULL;
void insert(struct listNode **, char);
void delete(struct listNode **, char);
void instructions();
void printList(struct listNode*);
int isEmpty( struct listNode*);
int main()
{
    printf( "Project version is %d", (PROJECT_VERSION_MAJOR) );
    printf( ".%d", PROJECT_VERSION_MINOR );
    printf( ".%d", PROJECT_VERSION_PATCH );
    printf( "\nExersise on repeat of linked list creation.\n" );
    int choice; char item;
    instructions();
    scanf("%d", &choice);
    while(choice != 4){
        switch(choice){
        case 1:
        printf("\nInput character:\n");
        scanf("%c", &item);
        insert(&start, item);
        printList(start);
        break;
        case 2:
        delete(&start, item);
        break;
        case 3:
        printList(start);
        break;
        default:
        printf("\nYou've entered wrong choice.\n");
        instructions();
        break;
    }
        printf("? ");
        scanf("%d", &choice);
    }
    printf( "\nEnd of run.\n" );
    return 0;
}
void insert(struct listNode **start, char value)
{
    struct listNode *new = malloc(sizeof(struct listNode));
    struct listNode * previous; struct listNode *current;
    if(new != NULL){
    new ->data = value;
    new ->nextPtr = NULL;
    previous = NULL;
    current = *start;
    while( current != NULL && value > current -> data )
    {
        previous = current;
        current = current ->nextPtr;
    }
    if(previous == NULL){
        new ->nextPtr = *start;
        *start = new;
    }
    else{
        previous ->nextPtr = new;
        new ->nextPtr = current;
    }
    }
    else
    printf("\n%c not inserted, no memory availiable.\n", value);
}
void instructions(){
    printf("\nEnter your choice:\n1 - to insert node in list; 2 - to delete node;\
    3 - to print list;\n4 - to exit.\n");
}
void printList(struct listNode *start)
{
    if(start == NULL)
    printf("\nThe list is empty.\n");
    else{
        printf("\nThe list is: |n");
        while(start != NULL){
        printf("%c -> ", start ->data);
        start = start ->nextPtr;
        }
    }
    printf("NULL\n");
}
int isEmpty( struct listNode *start)
{
    return start == NULL;
}
void delete(struct listNode **start, char value)
{
    struct listNode * current; struct listNode *previous; struct listNode * temp;
    previous = NULL;
    current = *start;
    if(isEmpty(*start))
    printf("\nThe list is empty.\n");
    else{
        printf("\nInput value: ");
        scanf("%c", &value);
        temp = *start;
        if((*start) ->data == value){
            *start = (*start) ->nextPtr;
            free(temp);
        }
        else{
            previous = *start;
            current = (*start) ->nextPtr;
            while(current ->data != value && current != NULL){
                previous = current;
                current = current ->nextPtr;
            }
            if(current ->data == value){
                temp = current;
                previous ->nextPtr = current ->nextPtr;
                free(temp);
            }
        }

        if(current ->data != value && current -> nextPtr == NULL)
        printf("\nThere isn't such value, like %c.\n", value);
    }
}