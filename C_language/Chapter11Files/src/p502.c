#include "config.h"
#include "stdio.h"

int main()
{
    printf( "Project version is %d", (PROJECT_VERSION_MAJOR) );
    printf( ".%d", PROJECT_VERSION_MINOR );
    printf( ".%d", PROJECT_VERSION_PATCH );
    printf( "\nExersise on page 502, consequtive file's creation.\n" );
    int account; char name[30]; double balance; FILE *cfPtr;/*pointer to a file clients.txt*/
    if((cfPtr = fopen("clients.txt", "w")) == NULL)
    printf( "\nFile cannot be opened.\n" );
    else{
        printf("Input account, name, balance:\n");
        printf("Enter EOF to end input.\n");
        printf("? ");
        scanf("%d%s%lf", &account, name, &balance);
    }
    while(!feof(stdin)){
        fprintf( cfPtr, "%-4d %-7s %-7.2lf\n", account, name, balance );
        printf("? ");
        scanf( "%d%s%lf", &account, name, &balance );
    }
    fclose(cfPtr);
    printf( "\n" );
    return 0;
}