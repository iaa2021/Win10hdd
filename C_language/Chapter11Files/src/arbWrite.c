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
    printf( "\nExersise on page 506, arbitrary file's writing.\n" );
    FILE *cfptr;
    if( (cfptr = fopen( "credit.txt", "r+" )) == NULL )
    printf( "\nFile cannot be opened.\n" );
    else{
        printf( "\nEnter account number 1 to 100, 0 to end input: " );
        scanf( "%d", &client.acc );
        while( client.acc != 0 )
        {
            printf( "\nEnter first name, last name, balance:\n" );
            scanf( "%s %s %lf", client.lastName, client.firstName,\
            &client.balance );
            fseek(cfptr, (client.acc - 1) * sizeof(struct clientData), SEEK_SET);
            fwrite( &client, sizeof(struct clientData), 1, cfptr );
            printf( "\nEnter account number 1 to 100, 0 to end input: " );
            scanf( "%d", &client.acc );
        }
    }
    fclose(cfptr);
    return 0;
}