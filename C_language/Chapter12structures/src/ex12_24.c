#include "tree.h"
struct queueNode{
    struct treeNode *unit;
    struct queueNode *next;
<<<<<<< HEAD
} *head = NULL, *tail = NULL;
void levelOrder(struct queueNode *, struct queueNode *, struct treeNode *);
=======
} *head = NULL, *tail = NULL, *head1 = NULL, *tail1 = NULL;
void enqueue(struct queueNode **, struct queueNode **, struct treeNode *);
struct queueNode *dequeue(struct queueNode **, struct queueNode **);
void levelOrder(struct treeNode *, struct queueNode **, struct queueNode **,\
 struct queueNode **, struct queueNode **);
>>>>>>> 421a87e (ex12_24 tree level print via queue, processing1)
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
<<<<<<< HEAD
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
=======
    printf("\nLevel ordered tree via queue is:\n");
    levelOrder(root, head, tail, head1, tail1);
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
void levelOrder(struct treeNode *root, struct queueNode **head, struct queueNode **tail,\
 struct queueNode **head1, struct queueNode **tail1){
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
>>>>>>> 421a87e (ex12_24 tree level print via queue, processing1)
