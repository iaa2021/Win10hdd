#include "config.h"
#include "stdio.h"

int main()
{
    printf( "Project version is %d", (PROJECT_VERSION_MAJOR) );
    printf( ".%d", PROJECT_VERSION_MINOR );
    printf( ".%d", PROJECT_VERSION_PATCH );
    printf( "\nExersise 11.3.\n" );
    FILE *ofPtr; 
    if((ofPtr = fopen("oldmast.txt", "r+")) == NULL)
    printf("File oldmast.txt cannot be opened.\n");
    FILE *tfPtr;
    if((tfPtr = fopen("trans.txt", "w")) == NULL)
    printf("File trans.txt cannot be opened.\n");
    FILE *nfPtr;
    if((ofPtr = fopen("newmast.txt", "w")) == NULL)
    printf("File oldmast.txt cannot be opened.\n");
    int accountNumber; char name[15]; double balance, amount;
    /*fscanf(ofPtr, "\n%-6d%-15s%-7.2lf\n", &accountNumber, name, &balance);
    fscanf(tfPtr, "%-d%-7.2lf", &accountNumber, &amount);
    fprintf(nfPtr, "%d%s%lf", accountNumber, name, balance);*/
    fprintf(tfPtr, "%-10s%-12s", "Account", "Transaction");
    printf("\nInput acc's number, transaction, EOF to end input:\n? ");
    scanf( "%d%lf", &accountNumber, &amount );
    while(!feof(stdin))
    {
        fprintf(tfPtr, "%-10d%-12.2lf", accountNumber, amount);
        printf("\nInput acc's number, transaction, EOF to end input:\n? ");
        scanf( "%d%lf", &accountNumber, &amount );
    }
    fclose(tfPtr);
    return 0;
}