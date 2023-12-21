#include "config.h"
#include "stdio.h"
#include "stdlib.h"
#include "string.h"
struct stackNode{
    char data;
    struct stackNode *next;
} *start = NULL;
void push(struct stackNode **, char );
char pop(struct stackNode **);
int isEmpty(struct stackNode *);
int main(){
    printf( "Project version is %d", (PROJECT_VERSION_MAJOR) );
    printf( ".%d", PROJECT_VERSION_MINOR );
    printf( ".%d", PROJECT_VERSION_PATCH );
    printf( "\nExersise 12.10 push string in stack & reverse it.\n" );
    char text[] = "mom";
    printf("\nString is %s\n", text);
    /*fgets(text, 100, stdin);*/
    for(size_t i = 0; i < sizeof(text); i++)
    push(&start, text[i]);
    
    while(!isEmpty(start))
    printf("%c", pop(&start));

    printf( "\nExersise 12.11 palindrom checking via stack.\n" );
    char *text1 = malloc(sizeof(text));
    for(size_t i = 0; i < sizeof(text); i++)
    push(&start, text[i]);
    int i = 0, count = 0;
    while(!isEmpty(start)){
        if(pop(&start) != text[i])
        count++;

        i++;
    }
    
    if(count == 0)
    printf("\nText is palindrom.\n");
    else
    printf("\nText is not palindrom.\n");
    printf( "\nEnd of run.\n" );
    return 0;
}
void push(struct stackNode **start, char value){
    struct stackNode *new = malloc(sizeof(struct stackNode));
    if(new != NULL){
        new -> data = value;
        new ->next = *start;
        *start = new;
    }
    else
    printf("\nNo memory allocated.\n");
}
char pop(struct stackNode **start){
    struct stackNode *temp;
    temp = *start;
    char value = (*start) ->data;
    *start = (*start) ->next;
    free(temp);
    return value;
}
int isEmpty(struct stackNode *start){
    return start == NULL;
}