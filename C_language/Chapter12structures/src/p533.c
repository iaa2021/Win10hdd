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
char delete(LISTNODEPTR *, char);
int empty(LISTNODEPTR);
void printList(LISTNODEPTR);
void instructions(void);
int main()
{
    printf( "Project version is %d", (PROJECT_VERSION_MAJOR) );
    printf( ".%d", PROJECT_VERSION_MINOR );
    printf( ".%d", PROJECT_VERSION_PATCH );
    printf( "\nExersise on p.533 linked list creation.\n" );
    LISTNODEPTR start = NULL;
    int choice; char item;
    instructions();/*menu output*/
    printf("? ");
    scanf("%d", &choice);
    while(choice != 3){
        switch(choice){
            case 1:
            printf("Enter a character: ");
            scanf("\n%c", &item );
            insert(&start, item);
            printList(start);
            break;
            case 2:
            if(!empty(start)){
                printf("Enter character to be deleted: ");
                scanf("\n%c", &item );
                if(delete(&start, item)){
                    printf("%c deleted.\n", item);
                    printList(start);
                }
                else
                printf("%c not found.\n", item);
            }
            else
            printf("\nList is empty.\n");
            break;
            default:
            printf("\nInvalid choice.\n");
            instructions();
            break;
        }
        printf("? ");
        scanf("%d", &choice);
    }
    printf( "\nEnd of run.\n" );
    return 0;
}
void instructions(void){
    printf("\nEnter your choice:\n1 - to insert node;\n2 - to delete node;\n3 - exit.\n");
}
void insert(LISTNODEPTR *sptr, char value){
    LISTNODEPTR new, previous, current;
    new = malloc(sizeof(LISTNODE));
    if( new != NULL )
    {
        new -> data = value;
        new -> nextPtr = NULL;
        previous = NULL;
        current = *sptr;
        while(current != NULL && value > current ->data){
            previous = current;
            current = current ->nextPtr;
        }
        if(previous == NULL){
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
char delete(LISTNODEPTR *sptr, char value){/*char delete(LISTNODEPTR *, char);*/
    LISTNODEPTR temp, previous, current;
    if(value == (*sptr) ->data){
        temp = *sptr;
        *sptr = (*sptr) -> nextPtr;
        free(temp);
        return value;
    }
    else{
        previous = *sptr;
        current = (*sptr) -> nextPtr;
    }
    while(current != NULL && current ->data != value){
        previous = current;
        current = current -> nextPtr;
    }
    if(current != NULL){
        temp = current;
        previous ->nextPtr = current ->nextPtr;
        free(temp);
        return value;
    }
}
int empty(LISTNODEPTR sptr){
    return sptr == NULL;
}
void printList(LISTNODEPTR current){
    if(current == NULL)
    printf("\nList is empty.\n");
    else{
        printf("\nThe list is:|n");
        while(current != NULL){
            printf("%c -> ", current ->data);
            current = current ->nextPtr;
        }
        printf("NULL\n");
    }
}