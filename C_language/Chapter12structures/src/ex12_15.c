#include "config.h"
#include "stdio.h"
#include "stdlib.h"
#include "time.h"
struct buyer{
    int enter;/*absolute time of buyer's appear*/
    int service;/*time of buyer's service*/
    int exit; /*absolute time of buyer's exit*/
    struct buyer *next;
};
struct buyer * pop(struct buyer **, struct buyer **);
void push(struct buyer **, struct buyer **, int, int, int);
int isEmpty(struct buyer *);
int main()
{
    printf( "Project version is %d", (PROJECT_VERSION_MAJOR) );
    printf( ".%d", PROJECT_VERSION_MINOR );
    printf( ".%d", PROJECT_VERSION_PATCH );
    printf( "\nEx 12.15, supermarket queue.\n" );
    struct buyer*head = NULL; struct buyer *tail = NULL;
     struct buyer *exiter = NULL;
    srand(time(0));
    int total = 0, appear, processing, out, count = 0, max = 0, maxService = 0, appRange;
    printf("\nInput client's appear range, from 2 to 7:\n");
    scanf("%d", &appRange);
    appear = rand()%appRange + 1;
    processing = rand()%4 + 1;
    total += appear;
    out = total + processing;
    push(&head, &tail, total, processing, out);/*first buyer's visit*/
    exiter = malloc(sizeof(struct buyer));
    count++;
    while(total < 720 && out < 724){
        appear = rand()%appRange + 1;
        processing = rand()%4 + 1;
        total += appear;
        if(total >= out)/*1 gone earlier than 2 came, or same time*/
        out = total + processing;
        else/*1 gone later than 2 came*/
        out += processing; 
        if(total < 720)
        push(&head, &tail, total, processing, out);
        count++;
    }
    int array[730][6] = {0};
    while(!isEmpty(head)){
        exiter = pop(&head, &tail);
        array[exiter ->enter][0] = 1;/*entry point*/
        array[exiter ->enter][1] = exiter ->service;
        array[exiter ->exit][2] = -1;/*leaving point*/
        array[exiter ->exit][4] = (exiter ->exit) - (exiter ->enter);/*service time*/
    }
    for(int i = 0; i < 730; i++)
    {
        for(int j = 0; j < 6; j++)
        {
            array[i][5] = i;/*clock time*/
            array[i][3] = array[i][0] + array[i][2];/*same time clients counter*/
            if(i > 0)
            array[i][3] = array[i - 1][3] + array[i][0] + array[i][2];
            if(max < array[i][3])
            max = array[i][3];
            if(maxService < array[i][4])
            maxService = array[i][4];

            printf("%4d ", array[i][j]);
        }
        printf("\t\n");
    }
    printf("\nCommon visitors number is %d, max client number is %d.\n", count, max);
    printf("\nMaximum visit time of single client is %dmin.\n", maxService);
    printf("\nEnd of run.\n");

    return 0;
}
void push(struct buyer **head, struct buyer **tail, int appear, int processing, int out){
    struct buyer *new;
    new = malloc(sizeof(struct buyer));
    if(new != NULL){
        new ->enter = appear; new ->service = processing; 
        new ->exit = out;  new ->next = NULL;
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