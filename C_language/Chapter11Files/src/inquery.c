#include "config.h"
#include "stdio.h"

int main()
{
    printf( "Project version is %d", (PROJECT_VERSION_MAJOR) );
    printf( ".%d", PROJECT_VERSION_MINOR );
    printf( ".%d", PROJECT_VERSION_PATCH );
    printf( "\nConsequtive file's reading.\n" );
    int account, request; char name[30]; double balance;
    FILE *cfPtr;
    if( (cfPtr = fopen("clients.txt", "r") ) == NULL )
    printf("\nFile cannot be opened.\n");
    else
    {
        printf("\nInput request:\n"
        "1 - list of accs with zero balances;"
        "\n2 - list of accs with credit balances;"
        "\n3 - list of accs with debit balances;"
        "\n4 - end input.\n? ");
        scanf("%d", &request);
    }
    while(request != 4)
    {
        switch( request )
        {
            case 1:
            printf("accs with zero balances:\n");
            fscanf(cfPtr, "%d%s%lf", &account, name, &balance);
            while(!feof(cfPtr))
            {
                if( balance == 0 )
                printf("%-10d%-13s%-7.2lf\n", account, name, balance);
                fscanf(cfPtr, "%d%s%lf", &account, name, &balance);
            }
            break;
            case 2:
            printf("accs with kredit balances:\n");
            fscanf(cfPtr, "%d%s%lf", &account, name, &balance);
            while(!feof(cfPtr))
            {
                if( balance < 0 )
                printf("%-10d%-13s%-7.2lf\n", account, name, balance);
                fscanf(cfPtr, "%d%s%lf", &account, name, &balance);
            }
            break;
            case 3:
            printf("accs with zero balances:\n");
            fscanf(cfPtr, "%d%s%lf", &account, name, &balance);
            while(!feof(cfPtr))
            {
                if( balance > 0 )
                printf("%-10d%-13s%-7.2lf\n", account, name, balance);
                fscanf(cfPtr, "%d%s%lf", &account, name, &balance);
            }
            break;
        }
        rewind(cfPtr);
        printf( "\n? " );
        scanf("%d", &request);
    }
    fclose(cfPtr);
    printf("\nEnd of run.\n");
    return 0;
}