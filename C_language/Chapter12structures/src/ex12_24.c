#include "tree.h"
struct queueNode{
    struct treeNode *unit;
    struct queueNode *next;
} *head = NULL, *tail = NULL;
void levelOrder(struct queueNode *, struct queueNode *, struct treeNode *);
int main(){
    struct treeNode *root = NULL; int value;
    printf( "Project version is %d", (PROJECT_VERSION_MAJOR) );
    printf( ".%d", PROJECT_VERSION_MINOR );
    printf( ".%d", PROJECT_VERSION_PATCH );
    printf( "\nEx 12.24, tree levels via queue.\n" );
    srand(time(0));
    for(int i = 0; i < 10; i++){
        int j = rand()%50 + 1;
        insert(&root, j);
    }
    if(root == NULL)
    printf("\nTree is empty.\n");
    level(&root); 
    depth(root);
    printf("\nTree has %d levels.\n", max);
    printf("\nLevel ordered1 tree is:\n");
    for(int i = 1; i <= max; i++)
    {
        printLevel(root, i);

        printf("\n");
    }
}
void levelOrder(struct queueNode *firstQueue, struct queueNode *secondQueue, struct treeNode *start){
    if(start != NULL){
        enqueue(&head, &tail);
    }
}
void enqueue(struct queueNode **head, struct queueNode **tail, struct treeNode *oneTree){
    struct queueNode * new = malloc(sizeof(struct queueNode));
    if(new != NULL){
        new ->unit = oneTree;
        new ->next = NULL;
        if(isEmpty(*head)){
            *head = new;
            (*head) ->next = *tail;
        }
        else
            (*tail) ->next = new;/*attach new to a tail*/

        *tail = new;/*marking new as a tail*/
    }
    else
    printf("\n%d not inserted, no memory avaliable.\n", oneTree ->data);
}