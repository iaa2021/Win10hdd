#include "config.h"
#include "stdio.h"
#include "stdlib.h"
struct stackNode{
    int data;
    struct listNode *nextPtr;
} *top = NULL;
typedef struct stackNode STACKNODE;
typedef struct stackNode * STACKNODEPTR;
void push(STACKNODEPTR *, int);
int pop(STACKNODEPTR *);
int isEmpty(STACKNODEPTR);
void printStack(STACKNODEPTR);
void instructions();
int main()
{
    printf( "Project version is %d", (PROJECT_VERSION_MAJOR) );
    printf( ".%d", PROJECT_VERSION_MINOR );
    printf( ".%d", PROJECT_VERSION_PATCH );
    printf( "\nCreation of stack, p.544.\n" );
    int choice, value;
    instructions();
    printf("\nEnter your choice:\n");
    scanf("%d", &choice);
    while(choice != 3){
        switch(choice){
        case 1:
        printf("\nEnter node's value: ");
        scanf("%d", &value);
        push(&top, value);
        printStack(top);
        break;
        case 2:
        if(!isEmpty(top)){
        printf("\nPopping an element %d.\n", pop(&top) );
        printStack(top);
        }
        break;
        default:
        printf("\nYou've entered wrong choice.\n");
        break;
        }
        instructions();
        printf("\n? ");
        scanf("%d", &choice);
    }
    printf( "\nEnd of run.\n" );
    return 0;
}
void push(STACKNODEPTR *top, int info)
{
    STACKNODEPTR new;
    new = malloc(sizeof(STACKNODE));
    if(new != NULL){
    new ->data = info;
    new ->nextPtr = *top;
    *top = new;
    }
    else
    printf("\nNo memory allocated.\n");
}
int pop(STACKNODEPTR *top)
{
    STACKNODEPTR temp = *top;
    int value = (*top) ->data;
    *top = (*top) ->nextPtr;
    free(temp);
    return value;
}
int isEmpty(STACKNODEPTR top)
{
    return top == NULL;
}
void instructions()
{
    printf("\nEnter your choice, 1 - to push value;\n2 - to pop value;\n3 - to end program.\n");
}
void printStack(STACKNODEPTR top)
{
    if(top == NULL)
    printf("\nThe stack is empty.\n");
    else{
    printf("\nThe stack is:\n");
    while(top != NULL){
        printf("%d -> ", top ->data);
        top = top ->nextPtr;
    }
    printf("NULL\n");
    }
}