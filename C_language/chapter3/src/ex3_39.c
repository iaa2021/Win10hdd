#include "config.h"
#include "stdio.h"
/*condition's sample*/
int main()
{ 
    printf( "Project version is %d", (PROJECT_VERSION_MAJOR) );
    printf( ".%d", PROJECT_VERSION_MINOR );
    printf( ".%d", PROJECT_VERSION_PATCH );
    printf("\nExersize 3.39.Check number .\n");
    int check = 1, b, c, count = 0;/*b is our integer*/
    printf( "\nInput integer for checking on 7: " );
    scanf( "%d", &b );
    c = b;
    while ( c != 0 )
    {
        c /= 10;
        count++;
    }
    c = b;
    printf( "\nYou've entered %d signed integer.\n", count );
    while ( count > 1 )
    {
        check *= 10;
        count--;
    }
    count = 0;
    printf( "\nCheck is %d", check );
    while ( c != 0 )
    {
        if( c / check == 7 )
        { count++; }
        c %= check;
        check /= 10;
    }
    printf( "\nInteger %d consists %d 7's.\n", b, count );
    printf( "\n" );
    return 0;
}