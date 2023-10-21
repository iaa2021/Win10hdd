#include "config.h"
#include "stdio.h"
struct clientData{
    int acc;
    char lastName[15];
    char firstName[10]; 
    double balance;
} client;
int main()
{
    printf( "Project version is %d", (PROJECT_VERSION_MAJOR) );
    printf( ".%d", PROJECT_VERSION_MINOR );
    printf( ".%d", PROJECT_VERSION_PATCH );
    printf( "\nExersise on page 506, arbitrary file's reading.\n" );
    FILE *cfptr;
    if( (cfptr = fopen( "credit.txt", "r" )) == NULL )
    printf( "\nFile cannot be opened.\n" );
    else{
        printf( "%-6s%-16s%11s%-10s\n", "Acct", "Last Name", "First Name",\
        "Balance" );
        while(!feof(cfptr)){
            fread( &client, sizeof(struct clientData), 1, cfptr );
            if( client.acc != 0 )
            printf("%-6d%-16s%-11s%-10.2lf\n", client.acc, client.lastName,\
            client.firstName, client.balance);
        }
    }
    fclose(cfptr);
    return 0;
}