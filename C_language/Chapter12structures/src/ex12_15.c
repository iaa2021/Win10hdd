#include "config.h"
#include "stdio.h"
#include "stdlib.h"
#include "time.h"
struct buyer{
    int enter;/*absolute time of buyer's appear*/
    int service;/*time of buyer's service*/
    int exit;/*absolute time of buyer's exit*/
    struct buyer *next;
} *one = NULL, *exiter = NULL;
struct buyer * pop(struct buyer **);
void push(struct buyer **, int, int, int);
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
    push(&one, total, processing, out);/*first buyer's visit*/
    count++;
    exiter = pop(&one);
    while(total <= 720)
    {
        appear = rand()%4 + 1;
        processing = rand()%4 + 1;
        total += appear;
        if(exiter ->exit <= total)/*1buyer exited earlier, than 2 came in*/
        out = total + processing;
        else/*2buyer came earlier, than 1 exited*/
        out = exiter ->exit + processing; 
        
        push(&one, appear, processing, out);
    }
    while(!isEmpty(one)){
        exiter = pop(one);
        printf("\nArrive time %d, service time %d, exit time %d\n", exiter ->enter,\
        exiter ->service, exiter ->exit);
    }

    printf( "\nEnd of run.\n" );
    return 0;
}
void push(struct buyer **start, int appear, int processing, int out){
    struct buyer *new, *previous, *current;
    new = malloc(sizeof(struct buyer));
    if(new != NULL){
        new ->enter = appear; new ->service = processing; new ->exit = out;
        current = (*start);
        while(current != NULL){
            previous = current;
            current = current ->next;
        }
        if(previous == NULL){
            new ->next = *start;
            *start = new;
        }
        else{
            previous ->next = new;
            new ->next = current;
        }
        free(new);
    }
    else
    printf("\nNo memory allocated.\n");
}
struct buyer * pop(struct buyer **start){
    struct buyer *current, *previous = NULL;
    current = *start;
    if(current == NULL){
    printf("\nQueue is empty.\n");
    return;
    }
    else{
        while(current ->next != NULL){
            previous = current;
            current = current ->next;
        }
        if(previous == NULL){
            *start = NULL;
        }
            
        else{
            previous ->next = NULL;
        }
        return current;
    }
}
int isEmpty(struct buyer  *start){
    return start == NULL;
}