#include "config.h"
#include "stdio.h"
struct clientData{
    int acc;
    char lastName[15];
    char firstName[10]; 
    double balance;
} blankClient = { 0, "", "", 0.0 };
int main()
{
    printf( "Project version is %d", (PROJECT_VERSION_MAJOR) );
    printf( ".%d", PROJECT_VERSION_MINOR );
    printf( ".%d", PROJECT_VERSION_PATCH );
    printf( "\nExersise on page 504, arbitrary file's creation.\n" );
    FILE *cfptr;
    if( (cfptr = fopen( "credit.txt","w" )) == NULL )
    printf( "\nFile cannot be opened.\n" );
    else
    {
        fwrite( &blankClient, sizeof(struct clientData), 1, cfptr );
        
        for( int i = 0; i < 100; i++ )
        fwrite( &blankClient, sizeof(struct clientData), 1, cfptr );

        fclose(cfptr);
    }
    return 0;
}