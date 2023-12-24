#include "tree.h"
struct queueNode{
    struct treeNode *unit;
    struct queueNode *next;
} *head = NULL, *tail = NULL, *head1 = NULL, *tail1 = NULL;
void enqueue(struct queueNode **, struct queueNode **, struct treeNode *);
struct treeNode *dequeue(struct queueNode **, struct queueNode **);
void treeEnqueue(struct queueNode **, struct queueNode **, struct treeNode *);
void printQueue(struct queueNode *);
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
     printf("\nLevel ordered tree via queue is:\n");
    treeEnqueue(&head, &tail, root);
    printQueue(head);
}
void enqueue(struct queueNode **head, struct queueNode **tail, struct treeNode *root){
    struct queueNode *new = malloc(sizeof(struct queueNode *));
    if(new != NULL){
        new ->unit = root;
        new ->next = NULL;
    }
       if(*head == NULL){
        *head = new;
        (*head) ->next = *tail;
       }
       else{
        (*tail) ->next = new;
        *tail = (*tail) ->next;
       }
}
struct treeNode *dequeue(struct queueNode **head, struct queueNode **tail){
    struct queueNode *temp;
    struct treeNode *start = malloc(sizeof(struct treeNode *));
    temp = *head;
    start = (*head) ->unit;
    *head = (*head) ->next;
    free(temp);
    if(*head == NULL)
    *tail = NULL;

    return start;
}
void treeEnqueue(struct queueNode **head, struct queueNode **tail, struct treeNode *root){
    if(root != NULL)
    enqueue(head, tail, root);

    treeEnqueue(head, tail, root -> left);
    treeEnqueue(head, tail, root -> right);
}
void printQueue(struct queueNode *head){
    if(head == NULL)
    printf("\nQueue is empty.\n");
    else{
        while(head != NULL){
        printf(" %d ", (head ->unit) ->data);
        head = head ->next;
        }
    }
}
/*void printQueue(QUEUENODEPTR head){
    if(head == NULL)
    printf("\nQueue is empty.\n");
    else{
        while(head != NULL){
        printf("%c -> ", head ->data);
        head = head ->next;
        }
    }
    printf("\nNULL\n");
}*/