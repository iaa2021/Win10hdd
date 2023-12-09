#include "config.h"
#include "stdio.h"
#include "stdlib.h"
#include "time.h"
struct buyer{
    int enter;/*absolute time of buyer's appear*/
    int service;/*time of buyer's service*/
    /*int exit; absolute time of buyer's exit*/
    struct buyer *next;
} *head = NULL, *tail = NULL; *exiter = NULL;
struct buyer * pop(struct buyer **, struct buyer **);
void push(struct buyer **, struct buyer **, int, int);
int isEmpty(struct buyer *);
int main()
{
    printf( "Project version is %d", (PROJECT_VERSION_MAJOR) );
    printf( ".%d", PROJECT_VERSION_MINOR );
    printf( ".%d", PROJECT_VERSION_PATCH );
    printf( "\nEx 12.15, supermarket queue.\n" );
    srand(time(0));
    int total = 0, appear, processing, out, count = 0, max = 0;
    appear = rand()%4 + 1;
    processing = rand()%4 + 1;
    total += appear;
    out = total + processing;
    push(&head, &tail, total, processing);/*first buyer's visit*/
    count++;
    while(total < 720){
        appear = rand()%4 + 1;
        processing = rand()%4 + 1;
        total += appear;
        if(total < out)
        out += processing;
        else
        out = total + processing;
        if(total < 720)
        push(&head, &tail, total, processing);
    }
    exiter = pop(&head, &tail);
    printf("Appear time is %d, service time is %d.\n", exiter ->enter, exiter ->service);
    printf("Common visitors number is %d", count);
    printf("\nEnd of run.\n");

    return 0;
}
void push(struct buyer **head, struct buyer **tail, int appear, int processing){
    struct buyer *new;
    new = malloc(sizeof(struct buyer));
    if(new != NULL){
        new ->enter = appear; new ->service = processing; new ->next = NULL;
        if(*head == NULL)
        *head = new;
        else
            (*tail) ->next = new;
        
            *tail = new;
    }
    else
    printf("\nNo memory allocated.\n");
}
struct buyer * pop(struct buyer **head, struct buyer **tail){
    struct buyer *current;
    current = *head;
    *head = (*head) ->next;
    return current;
    if(*head == NULL){
    *tail = NULL;
    return;
    }
}
int isEmpty(struct buyer  *start){
    return start == NULL;
}