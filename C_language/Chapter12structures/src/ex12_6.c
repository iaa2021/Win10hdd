#include "config.h"
#include "stdio.h"
#include "stdlib.h"
#include "time.h"
#include "stdarg.h"
struct ex12_6
{
    int data;
    struct ex12_6 *next;
} *start1 = NULL, *start2 = NULL;
void insert(struct ex12_6 **, int);
struct ex12_6 * concatenate(struct ex12_6 **, struct ex12_6 **);
void print(struct ex12_6 *);
int main(){
printf( "Project version is %d", (PROJECT_VERSION_MAJOR) );
printf( ".%d", PROJECT_VERSION_MINOR );
printf( ".%d", PROJECT_VERSION_PATCH );
printf("\nExersize 12.6, concatenate 2 lists.\n");
srand(time(0));
for (int i = 0; i < 10; i++)
{
    int j = rand()%100 + 1;
    insert(&start1, j);
}
for (int i = 0; i < 10; i++)
{
    int j = rand()%100 + 1;
    insert(&start2, j);
}
printf("\nList1 is: ");
print(start1);
printf("\nList2 is: ");
print(start2);
printf("\nConcatenating 2 lists.\n");
start1 = concatenate(&start1, &start2);
printf("\nList1 after concatenation is: ");
print(start1);
printf( "\nEnd of run.\n" );
    return 0;
}
void insert(struct ex12_6 **start, int value){
    struct ex12_6 *current = *start, *previous = NULL, *new;
    new = malloc(sizeof(struct ex12_6));
    if(new != NULL){
    new ->data = value;
    new ->next = NULL;
    while(current != NULL && value > current ->data){
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
    }
    else
    printf("\nNo memory allocated.\n");
}
void print(struct ex12_6 *start){
    while (start != NULL)
    {
        if(start ->next == NULL)
        printf("%d", start ->data);
        else
        printf("%d -> ", start ->data);

        start = start ->next;
    }
}
struct ex12_6 * concatenate(struct ex12_6 **start1, struct ex12_6 **start2)
{
    struct ex12_6 *current = *start1;
    while(current ->next !=NULL)
    current = current ->next;

    current ->next = *start2;
    
    return *start1;
}