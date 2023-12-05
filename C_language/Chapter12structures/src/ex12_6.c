#include "config.h"
#include "stdio.h"
#include "stdlib.h"
#include "time.h"
#include "stdarg.h"
struct ex12_6
{
    int data;
    struct ex12_6 *next;
} *start1 = NULL, *start2 = NULL, *start3 = NULL;
void insert(struct ex12_6 **, int);
struct ex12_6 * concatenate(struct ex12_6 **, struct ex12_6 **);
struct ex12_6 * merge(struct ex12_6 **, struct ex12_6 **);
void print(struct ex12_6 *);
void *total(struct ex12_6 *, double *);
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
printf("\nList1 after concatenation is:\n");
print(start1);
printf("\nExersize 12.7, merge 2 lists.\n");
start3 = merge(&start1, &start2);
printf("\nList3 after merging list1 and list2 is:\n");
print(start3);
printf("\nExersize 12.8, sum and average of linked list1.\n");
printf("\nList2 is: ");
print(start2);
double ptr[3];
total(start2, ptr);
printf("\nSize of list2 = %.0lf, sum of list2 = %.0lf, list2's average = %.2lf\n", ptr[2], ptr[0], ptr[1]);
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
struct ex12_6 * merge(struct ex12_6 **start1, struct ex12_6 **start2){
    int count = 1, i = 0; struct ex12_6 *start3;
    struct ex12_6 *current, *previous, *new;
    current = *start1;
    while(current ->next != NULL){
        count++;
        current = current ->next;
    }
    printf("\nSize of list1 = %d\n", count);
    current = *start2; count++;
    while(current ->next != NULL){
        count++;
        current = current ->next;
    }
    printf("\nSize of list1 and list2 = %d\n", count);
    int *array = malloc(sizeof(int) * count);
    for (int i = 0; i < count; i++)
    array[i] = 0;

    current = *start1;
    while(current != NULL){
        array[i] = current ->data;
        i++;
        current = current ->next;
    }
    current = *start2;
    while(current != NULL){
        array[i] = current ->data;
        i++;
        current = current ->next;
    }
    printf("\nArray is:\n");
    for (int i = 0; i < count; i++)
    {
        insert(&start3, array[i]);
    }
    return start3;
}
void *total(struct ex12_6 *start, double *array){
    int sum = 0, count = 1; 
    while(start ->next != NULL){
        sum += start ->data;
        count++;
        start = start ->next;
    }
    array[0] = (double)sum;
    array[1] = sum / (double)count;
    array[2] = (double)count;
}