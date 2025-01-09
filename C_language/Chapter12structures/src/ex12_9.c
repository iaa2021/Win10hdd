#include "config.h"
#include "stdio.h"
#include "stdlib.h"
#include "time.h"
struct ex12_9{
    int data;
    struct ex12_9 *next;
} *start = NULL, *start1 = NULL;
void insert(struct ex12_9 **, int);
void insert1(struct ex12_9 **, int);/*unordered inserting*/
struct ex12_9* reverse(struct ex12_9*, struct ex12_9 * );
void print(struct ex12_9 *);
int main(){
    printf( "Project version is %d", (PROJECT_VERSION_MAJOR) );
    printf( ".%d", PROJECT_VERSION_MINOR );
    printf( ".%d", PROJECT_VERSION_PATCH );
    printf("\nExersize 12.9, reverse list.\n");
    srand(time(0)); int j;
    for(int i = 0; i < 10; i++){
        j = rand()%100 + 1;
        insert(&start, j);
    }
    printf("\nList is:\n");
    print(start);
    start1 = reverse(start, start1);
    printf("\nReversed list is:\n");
    print(start1);
    printf( "\nEnd of run.\n" );
    return 0;
}
void insert(struct ex12_9 **start, int value){
    struct ex12_9 *new, *previous, *current;
    new = malloc(sizeof(struct ex12_9 *));
    if(new != NULL){
        new ->data = value;
        previous = NULL;
        current = *start;
        while(current != NULL && value > current ->data){
            previous = current;
            current = current ->next;
        }
        if(previous == NULL){
            new -> next = *start;
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
void print(struct ex12_9 *start){
    while(start != NULL){
        if(start ->next != NULL)
        printf("%d -> ", start ->data);
        else
        printf("%d\n", start ->data);

        start = start ->next;
    }
}
void insert1(struct ex12_9 **start, int value){
    struct ex12_9 *new, *current, *previous;
    new = malloc(sizeof(struct ex12_9));
    if(new != NULL){
        new ->data = value;
        previous = NULL; current = *start;
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
    }
    else
    printf("\nNo memory allocated.\n");
}
struct ex12_9* reverse(struct ex12_9* start, struct ex12_9 *start1 ){
    int array[10], i = 0;
    while(start != NULL){
        array[i] = start ->data;
        i++;
        start = start ->next;
    } 
    for(int i = 9; i >= 0; i--)
    insert1(&start1, array[i]);
return start1;
}