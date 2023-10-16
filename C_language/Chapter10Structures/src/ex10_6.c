#include "config.h"
#include "stdio.h"
#include "stdlib.h"
#include "time.h"
struct customer
{
    char firstName[15], lastName[15];
    int customerNumber;
    struct 
    {
        char phoneNumber[11], address[50], city[15], state[3], zipcode[6];
    } personal;
} customerRecord, *customerPtr;
union integer
{
    char c; int i; short s; long l;
} intKit;

int main()
{ 
    printf( "Project version is %d", (PROJECT_VERSION_MAJOR) );
    printf( ".%d", PROJECT_VERSION_MINOR );
    printf( ".%d", PROJECT_VERSION_PATCH );
    printf( "\nExersise 10.6, struct customer.\n" );
    customerPtr = &customerRecord;
    customerRecord.lastName; customerPtr->personal.phoneNumber;
    customerRecord.personal.address;
    printf( "\nExersise 10.8, union integer.\n" );
    printf( "\nInput char, int, short and long values:\n" );
    scanf( "%c", &intKit.c);
    scanf( "%d", &intKit.i );
    scanf( "%hd", &intKit.s);
    scanf( "%ld", &intKit.l );
    printf("Outputted values:\n");
    printf ("%c, ", intKit.c);
    printf( "%d, ", intKit.i );
    printf( "%hd, ", intKit.s);
    printf( "%ld.", intKit.l );
    printf( "\n" );
    return 0;
}