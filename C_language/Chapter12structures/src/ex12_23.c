#include "tree.h"
int main(){
    struct treeNode *root = NULL; int value;
    printf( "Project version is %d", (PROJECT_VERSION_MAJOR) );
    printf( ".%d", PROJECT_VERSION_MINOR );
    printf( ".%d", PROJECT_VERSION_PATCH );
    printf( "\nEx 12.19, depth function, tree levels.\n" );
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
    printf("\nInput value to search:\n");
    scanf("%d", &value);
    binaryTreeSearch(root, value);
    printf("\nEnd of run.\n");
    return 0;
}