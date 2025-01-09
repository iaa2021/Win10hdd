#include "config.h"
#include "stdio.h"
int main()
{
    printf( "Project version is %d", (PROJECT_VERSION_MAJOR) );
    printf( ".%d", PROJECT_VERSION_MINOR );
    printf( ".%d", PROJECT_VERSION_PATCH );
    printf( "\nExersise 11.7, creation trans.txt.\n" );
    int account; double transaction;
    FILE *tfPtr;
    if((tfPtr = fopen("trans.txt", "r+")) == NULL)
    printf( "\nFile trans.txt cannot be opened.\n" );
    else
    {
        fprintf(tfPtr, "%-10s%-15s\n", "Account", "Transaction");
        printf("\nInput account, sum of transaction, EOF to end input:\n? ");
        scanf("%d%lf", &account, &transaction);
        while(!feof(stdin))
        {
            fprintf(tfPtr, "%-10d%-15.2lf\n", account, transaction);
            printf("\n? ");
            scanf("%d%lf", &account, &transaction);
        }
    }
    fclose(tfPtr);
    printf( "\n" );
    return 0;
}