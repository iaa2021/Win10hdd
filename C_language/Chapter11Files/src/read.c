#include "config.h"
#include "stdio.h"

int main()
{
    printf( "Project version is %d", (PROJECT_VERSION_MAJOR) );
    printf( ".%d", PROJECT_VERSION_MINOR );
    printf( ".%d", PROJECT_VERSION_PATCH );
    printf( "\nConsequtive file's reading.\n" );
    int account; char name[30]; double balance;
    FILE *cfPtr;
    if( (cfPtr = fopen("clients.txt", "r") ) == NULL )
    printf("\nFile cannot be opened.\n");
    else
    {
        printf("\n%-10s%-13s%-7s\n", "Account", "Name", "Balance");
        fscanf( cfPtr, "%d%s%lf", &account, name, &balance );
    }
    while(!feof(cfPtr))
    {
        printf("%-10d%-13s%-7.2lf\n", account, name, balance);
        fscanf( cfPtr, "%d%s%lf", &account, name, &balance );
    }
    fclose(cfPtr); 
    return 0;
}