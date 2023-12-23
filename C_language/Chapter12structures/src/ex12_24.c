#include "tree.h"
struct queueNode{
    struct treeNode *unit;
    struct queueNode *next;
} *head = NULL, *tail = NULL, *head1 = NULL, *tail1 = NULL;
void enqueue(struct queueNode **, struct queueNode **, struct treeNode *);
struct queueNode *dequeue(struct queueNode **, struct queueNode **);
void levelOrder(struct treeNode *, struct queueNode **, struct queueNode **, struct queueNode **, struct queueNode **);
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
    printf("\nLevel ordered tree is:\n");
    for(int i = 1; i <= max; i++)
    {
        printLevel(root, i);

        printf("\n");
    }
}
void enqueue(struct queueNode **head, struct queueNode **tail, struct treeNode *root){
    struct queueNode *new = malloc(sizeof(struct queueNode *));
    if(*head == NULL){
        (*head) ->unit = root;
        (*head) ->next = *tail;
    }
    else{
        (*tail) ->next = root;
        (*tail) = root;
    }
}
struct queueNode *dequeue(struct queueNode **head, struct queueNode **tail){
    struct queueNode *temp;
    struct treeNode *start;
    temp = *head;
    *head = (*head) ->next;
    start = temp ->unit;
    free(temp);
    if(*head == NULL)
    *tail = NULL;

    return start;
}
void levelOrder(struct treeNode *root, struct queueNode **head, struct queueNode **tail, struct queueNode **head1, struct queueNode **tail1){
    if(root != NULL){
        enqueue(&head, &tail, root);/*1 queue*/
        if(root ->left != NULL)
        enqueue(&head, &tail, root ->left);/*2 queue*/
        if(root ->right != NULL)
        enqueue(&head1, &tail1, root ->right);/*2 queue*/
        while(*head != NULL)
        printf(" %d ", ((dequeue(&head, &tail)) ->unit) ->data);
        while(*head1 != NULL)
        enqueue(*head, *tail, dequeue(&head, &tail));
    }
    levelOrder(root ->left, &head, &tail, &head1, &tail1);
    levelOrder(root ->right, &head, &tail, &head1, &tail1);
 }
