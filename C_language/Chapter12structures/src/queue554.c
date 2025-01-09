#include "config.h"
#include "stdio.h"
#include "stdlib.h"
struct queueNode{
    char data;
    struct queueNode *next;
} *head = NULL, *tail = NULL;
typedef struct queueNode QUEUENODE;
typedef QUEUENODE *QUEUENODEPTR;
void printQueue(QUEUENODEPTR);
char dequeue(QUEUENODEPTR *, QUEUENODEPTR *);
void enqueue(QUEUENODEPTR *, QUEUENODEPTR *, char);
int isEmpty(QUEUENODEPTR);
void instructions();
int main(){
    printf( "Project version is %d", (PROJECT_VERSION_MAJOR) );
    printf( ".%d", PROJECT_VERSION_MINOR );
    printf( ".%d", PROJECT_VERSION_PATCH );
    printf( "\nQueue creation.\n" );
    int choice; char value;
    printf("\nEnter your choice: ");
    instructions();
    scanf("%d", &choice);
    while(choice != 3){
        switch(choice){
            case 1:
            printf("\nInput character: ");
            scanf("\n%c", &value);
            enqueue(&head, &tail, value);
            printQueue(head);
            break;
            case 2:
            if(!isEmpty(head)){
            value = dequeue(&head, &tail);
            printf("%c was deleted.\n", value);
            }
            printQueue(head);
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
void instructions(){
    printf("\nMake your choise:\n1 - to enqueue node;\n2 - to dequeue node;\
    3 - to end program.\n");
}
int isEmpty(QUEUENODEPTR head){
    return head == NULL;
}
void enqueue(QUEUENODEPTR *head, QUEUENODEPTR *tail, char value){
    QUEUENODEPTR new = malloc(sizeof(QUEUENODE));
    if(new != NULL){
        new ->data = value;
        new ->next = NULL;
        if(isEmpty(*head)){
            *head = new;
            (*head) ->next = *tail;
        }
        else
            (*tail) ->next = new;/*attach new to a tail*/

        *tail = new;/*marking new as a tail*/
    }
    else
    printf("\n%c not inserted, no memory availiable.\n", value);
}
char dequeue(QUEUENODEPTR *head, QUEUENODEPTR *tail){
    char value = (*head) ->data;
    QUEUENODEPTR temp;
    temp = *head;
    *head = (*head) ->next;

    if(*head == NULL)
    *tail = NULL;

    free(temp);
    return value;
}
void printQueue(QUEUENODEPTR head){
    if(head == NULL)
    printf("\nQueue is empty.\n");
    else{
        while(head != NULL){
        printf("%c -> ", head ->data);
        head = head ->next;
        }
    }
    printf("\nNULL\n");
}