#include "config.h"
#include "stdio.h"
void trans(FILE *);
void oldmast(FILE *);
int main()
{
    printf( "Project version is %d", (PROJECT_VERSION_MAJOR) );
    printf( ".%d", PROJECT_VERSION_MINOR );
    printf( ".%d", PROJECT_VERSION_PATCH );
    printf( "\nExersise 11.3, creation oldmast.txt, trans.txt.\n" );
    printf( "\nExersise 11.8, creating transaction and client's lists.\n" );
    int accountNumber, choice; char name[20]; double balance, amount;
    FILE *tfPtr; FILE *ofPtr;
    printf( "Input your choice, 0 to end input:\n" );
    printf( "1 - create trans.txt;\n2 - create oldmast.txt;\n" );
    scanf("%d", &choice);
    while( choice != 0 )
    {
        switch(choice){
            case 1:
            trans(tfPtr);
            break;
            case 2:
            oldmast(ofPtr);
            break;
            default:
            printf("\nYou've entered wrong choice.\n");
        }
        printf( "Input your choice, 0 to end input:\n" );
        printf( "1 - create trans.txt;\n2 - create oldmast.txt;\n" );
        scanf("%d", &choice);
    }
    printf( "\n" );
    return 0;
}
void trans(FILE *tfPtr)
{
    if((tfPtr = fopen("trans.txt", "r+")) == NULL)
    printf( "\nFile trans.txt cannot be opened.\n" );
    else
    {
        int account; double transaction;
        fprintf(tfPtr, "%-10s%-15s", "Account", "Transaction");
        printf("\nInput account, sum of transaction, EOF to end input:\n");
        scanf("%d%lf", &account, &transaction);
        while(!feof(stdin))
        {
            fprintf(tfPtr, "%-10d%-15lf\n", account, transaction);
            printf("\nInput account, sum of transaction, EOF to end input:\n");
            scanf("%d%lf", &account, &transaction);
        }
    }
    fclose(tfPtr);
}
void oldmast(FILE *ofPtr)
{
    if((ofPtr = fopen("oldmast.txt", "r+")) == NULL)
    printf( "\nFile oldmast.txt cannot be opened.\n" );
    else
    {
        int account; char name[20];double balance;
        fprintf(ofPtr, "%-10s%-20s%-15s", "Account", "Name", "Balance");
        printf("\nInput account, name, sum of balance; EOF to end input:\n");
        scanf("%d%s%lf", &account, name, &balance);
        while(!feof(stdin))
        {
            fprintf(ofPtr, "%-10d%-20s%-15lf", account, name, balance);
            printf("\nInput account, name, sum of balance; EOF to end input:\n");
            scanf("%d%s%lf", &account, name, &balance);
        }
    }
    fclose(ofPtr);
}