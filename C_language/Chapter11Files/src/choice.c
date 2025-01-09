#include "config.h"
#include "stdio.h"
struct clientData{
    int acc;
    char lastName[15];
    char firstName[10]; 
    double balance;
};
void create( FILE * );
void edit( FILE * );
void delete( FILE * );
void textFile( FILE * );
int main()
{
    printf( "Project version is %d", (PROJECT_VERSION_MAJOR) );
    printf( ".%d", PROJECT_VERSION_MINOR );
    printf( ".%d", PROJECT_VERSION_PATCH );
    printf( "\nExersise on page 506, arbitrary file's reading.\n" );
    FILE *cfptr;
    if( (cfptr = fopen( "credit.txt", "r+" )) == NULL )
    printf( "\nFile cannot be opened.\n" );
    else
    {
        int choice;
        printf("\nInput your choice, 0 to end input:\n");
        printf( "1 - create text file;\n2 - create record;" );
        printf( "\n3 - edit record;\n4 - delete record;\n" );
        scanf( "%d", &choice );
        while( choice != 0 )
        {
            switch(choice)
            {
                case 1:
                textFile( cfptr );
                break;
                case 2:
                create( cfptr );
                break;
                case 3:
                edit( cfptr );
                break;
                case 4:
                delete( cfptr );
                break;
                default:
                printf("\nYou've entered wrong choice.\n");
                break;
            }
            printf("\nInput your choice, 0 to end input:\n");
            printf( "1 - create text file;\n2 - create record;" );
            printf( "\n3 - edit record;\n4 - delete record;\n" );
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
        fprintf( wPtr, "%-6s%-16s%-16s%-10s\n", "Acc", "Last Name",\
        "First Name", "Balance" );
        while(!feof(cfptr))
        {
        fread( &blank, sizeof(struct clientData), 1, cfptr );
        if( blank.acc != 0 )
          {
            fprintf( wPtr, "%-6d%-16s%-16s%-10.2lf\n", blank.acc,\
            blank.lastName, blank.firstName, blank.balance );
          }
        }
    }
    fclose(wPtr);
    printf("\nText file've been created.\n");
}
void create( FILE *cfptr )
{
    struct clientData blank; int number;
    printf( "\nEnter account number 1 to 100, 0 to end input: " );
    scanf( "%d", &number );
    rewind(cfptr);
    while( number != 0 )
    {
        fseek( cfptr, ( number - 1 ) * sizeof( struct clientData ), SEEK_SET );
        fread( &blank, sizeof( struct clientData ), 1, cfptr );
        if( blank.acc != 0 )
        {
            printf( "\nRecord with this account already exists.\n" );
            break;    
        }
        else
        {
            blank.acc = number;
            printf( "\nEnter first name, last name, balance:\n" );
            scanf( "%s%s%lf", blank.firstName, blank.lastName, \
            &blank.balance );
            fseek(cfptr, ( number - 1 ) * sizeof(struct clientData), SEEK_SET);
            fwrite( &blank, sizeof(struct clientData), 1, cfptr );
            printf( "\nEnter account number 1 to 100, 0 to end input: " );
            scanf( "%d", &number );
        }
    }
}
void delete( FILE *cfptr )
{
    struct clientData blank, blank1 = {0, "", "", 0.0}; int number;
    rewind( cfptr );
    printf("\nInput acc's number to delete:\n");
    scanf("%d", &number);
    fseek(cfptr, (number - 1)*sizeof(struct clientData), SEEK_SET);
    fread(&blank, sizeof(struct clientData), 1, cfptr);
    if( blank.acc == 0 )
    printf( "\nAccount #%d doesn't exists.\n", number );
    else{
        fseek(cfptr, (number - 1)*sizeof(struct clientData), SEEK_SET);
        fwrite(&blank1, sizeof(struct clientData), 1, cfptr );
        printf( "\nAccount #%d already destroyed.\n", number );
    }
}
void edit( FILE *cfptr )
{
    struct clientData blank; int number; double transaction;
    rewind(cfptr);
    printf("\nInput acc's number to edit:\n");
    scanf("%d", &number);
    fseek(cfptr, (number - 1)*sizeof(struct clientData), SEEK_SET);
    fread(&blank, sizeof(struct clientData), 1, cfptr);
    if( blank.acc == 0 )
    printf( "\nAccount #%d doesn't exists.\n", number );
    else{
        printf("\nAcc's data:\n");
        printf("\n%-6d%-10s%-10s%-7.2lf\n", blank.acc, blank.firstName,\
        blank.lastName, blank.balance );
        printf("\nInput sum of transaction, +/-:\n");
        scanf( "%lf", &transaction );
        blank.balance += transaction;
        printf( "\nNew acc #%d balance = %.2lf.\n", blank.acc, blank.balance );
        fseek(cfptr, (number - 1)*sizeof(struct clientData), SEEK_SET);
        fwrite( &blank, sizeof(struct clientData), 1, cfptr );
        fseek(cfptr, (number - 1)*sizeof(struct clientData), SEEK_SET);
        fread(&blank, sizeof(struct clientData), 1, cfptr);
        printf("\nNew acc's data:\n");
        printf("\n%-6d%-10s%-10s%-7.2lf\n", blank.acc, blank.firstName,\
        blank.lastName, blank.balance );
    }
}