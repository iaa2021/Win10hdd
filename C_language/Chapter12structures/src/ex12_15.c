#include "config.h"
#include "stdio.h"
#include "stdlib.h"
#include "time.h"
struct buyer{
    int enter;/*time of buyer's appear*/
    int service;/*time of buyer's service*/
    struct buyer *next;
} *one = NULL;
void pop(struct buyer **);
void push(struct buyer **, int, int);
isEmpty(struct buyer *);
int main()
{
    printf( "Project version is %d", (PROJECT_VERSION_MAJOR) );
    printf( ".%d", PROJECT_VERSION_MINOR );
    printf( ".%d", PROJECT_VERSION_PATCH );
    printf( "\nEx 12.15, supermarket queue.\n" );
    srand(time(0));
    int total = 0;
    printf( "\nEnd of run.\n" );
    return 0;
}
void push(struct buyer **start, int appear, int processing){
    struct buyer *new, *previous, current;
    new = malloc(sizeof(struct buyer));
    if(new != NULL){
        new ->enter = appear; new ->service = processing;
        current = *start;
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
void pop(struct buyer **start){
    struct buyer *current, *previous = NULL;
    current = *start;
    if(current == NULL)
    printf("\nQueue is empty.\n");
    else{
        while(current ->next != NULL){
            previous = current;
            current = current ->next;
        }
        if(previous == NULL)
            *start = NULL;
        else{
            previous ->next = NULL;
            free(current);
        }
    }
}