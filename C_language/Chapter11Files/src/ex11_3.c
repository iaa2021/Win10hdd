#include "config.h"
#include "stdio.h"
int main()
{
    printf( "Project version is %d", (PROJECT_VERSION_MAJOR) );
    printf( ".%d", PROJECT_VERSION_MINOR );
    printf( ".%d", PROJECT_VERSION_PATCH );
    printf( "\nExersise 11.3, creation oldmast.txt.\n" );
    int account; char first[10]; char last[15]; double balance;
    FILE *ofPtr;
    if((ofPtr = fopen("oldmast.txt", "r+")) == NULL)
    printf( "\nFile oldmast.txt cannot be opened.\n" );
    else
    {
        fprintf(ofPtr, "%-10s%-15s%-15s%-10s\n", "Account", "First Name",\
        "Last Name", "Balance");
        printf("\nInput account, first name, last name, sum of balance;\
        EOF to end input:\n? ");
        scanf("%d%s%s%lf", &account, first, last, &balance);
        while(!feof(stdin))
        {
            fprintf(ofPtr, "%-10d%-15s%-15s%-10.2lf\n", account, first, last,\
            balance);
            printf("\n? ");
            scanf("%d%s%s%lf", &account, first, last, &balance);
        }
    }
    fclose(ofPtr);
    printf( "\n" );
    return 0;
}