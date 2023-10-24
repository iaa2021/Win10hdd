#include "config.h"
#include "stdio.h"
struct clientData{
    int acc;
    char lastName[15];
    char firstName[10]; 
    double balance;
};
/*void create( FILE * );
void edit( FILE * );
void delete( FILE * );*/
void textFile( FILE * );
int main()
{
    printf( "Project version is %d", (PROJECT_VERSION_MAJOR) );
    printf( ".%d", PROJECT_VERSION_MINOR );
    printf( ".%d", PROJECT_VERSION_PATCH );
    printf( "\nExersise on page 506, arbitrary file's reading.\n" );
    FILE *cfptr;
    if( (cfptr = fopen( "credit.txt", "r" )) == NULL )
    printf( "\nFile cannot be opened.\n" );
    else
    {
        int choice;
        printf("\nInput your choice, 0 to end input:\n");
        printf( "1 - create record;\n2 - read from file;" );
        printf( "3 - edit record;\n4 - delete record;\n" );
        scanf( "%d", &choice );
        while( choice != 0 )
        {
            switch(choice)
            {
                case 1:
                textFile( cfptr );
                break;
                /*case 2:
                create( cfptr );
                break;
                case 3:
                edit( cfptr );
                break;
                case 4:
                delete( cfptr );
                break;*/
                default:
                printf("\nYou've entered wrong choice.\n");
                break;
            }
            printf("\nInput your choice, 0 to end input:\n");
            printf( "1 - create record;\n2 - read from file;" );
            printf( "3 - edit record;\n4 - delete record;\n" );
            scanf( "%d", &choice );
        }
    }
    fclose(cfptr);
    return 0;
}
void textFile( FILE *cfptr )
{
    struct clientData blank;
    FILE *wPtr;
    if( (wPtr = fopen("accounts.txt", "w")) == NULL )
    printf( "\nFile cannot be opened.\n" );
    else
    {
        rewind(cfptr);
        fprintf( wPtr, "%-6s %-16s %-11s %-10s", "Account", "Last Name",\
        "First Name", "Balance" );
        while(feof(cfptr))
        {
        fread( &blank, sizeof(struct clientData), 1, cfptr );
        if( blank.acc != 0 )
          {
            fprintf( wPtr, "%-6d %-16s %-11s %-10.2lf", blank.acc,\
            blank.lastName, blank.firstName, blank.balance );
          }
        }
    }
    fclose(wPtr);
}