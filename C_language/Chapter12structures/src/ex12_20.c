#include "config.h"
#include "stdio.h"
#include "string.h"
#include "stdlib.h"
#include "time.h"
struct listNode{
    int data;
    struct treeNode *next;
} *root = NULL;
void insert(struct listNode **, int);
void delete(struct listNode **, int);
int main(){
    printf( "Project version is %d", (PROJECT_VERSION_MAJOR) );
    printf( ".%d", PROJECT_VERSION_MINOR );
    printf( ".%d", PROJECT_VERSION_PATCH );
    printf( "\nEx 12.20, recursive function, of list's reverce print.\n" );

    printf("\nEnd of run.\n");
    return 0;
}
