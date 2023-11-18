#include "config.h"
#include "stdio.h"
#include "stdlib.h"
struct listNode{
    char data;
    struct listNode *nextPtr;
};
typedef struct listNode LISTNODE;
typedef LISTNODE * LISTNODEPTR;
void insert(LISTNODEPTR *, char);
void delete(LISTNODEPTR *, char);
int empty(LISTNODEPTR);
void printList(LISTNODEPTR);
void instructions(void);
int main()
{
    printf( "Project version is %d", (PROJECT_VERSION_MAJOR) );
    printf( ".%d", PROJECT_VERSION_MINOR );
    printf( ".%d", PROJECT_VERSION_PATCH );
    printf( "\nExersise on p.533 linked list creation.\n" );

    printf( "\n" );
    return 0;
}
void instructions(void){
    printf("\nEnter your choice:\n1 - to insert node;\n2 - to delete node;\n3 - exit.\n");
}
void insert(LISTNODEPTR *sptr, char value){
    LISTNODEPTR new, previous, current;
    new = malloc(sizeof(struct listNode));
    if( new != NULL )
    {
        new -> data = value;
        new -> nextPtr = NULL;
        previous = NULL;
        current = *sptr;
        while(current != NULL && value > current ->data)
        {
            previous = current;
            current = current ->nextPtr;
        }
        if(previous == NULL)
        {
            new ->nextPtr = *sptr;
            *sptr = new;

        }
        else{
            previous ->nextPtr = new;
            new ->nextPtr = current;
        }
    }
    else
    printf("\n%c not inserted, no memory availiable.\n", value);
}