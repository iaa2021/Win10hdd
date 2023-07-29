#include "config.h"
#include "stdio.h"
/*condition's sample*/
int main()
{ 
    printf( "Project version is %d", (PROJECT_VERSION_MAJOR) );
    printf( ".%d", PROJECT_VERSION_MINOR );
    printf( ".%d", PROJECT_VERSION_PATCH );
    printf("\nExersize 3.39.Check nuber .\n");
    int check = 100000, b, c, d, count = 0;/*b is our integer*/
    printf( "\n 748 / 100 = %d", 748 / 100 );
    printf( "\nInput integer for checking on 7: " );
    scanf( "%d", &b );
    if( b != 7 )
    {
        c = b;
        while ( (c %= check) != 0 )
        {
            c %= check; 
            for (int i = 0; i < 5; i++)
            {
                if( c / check == 7 )
                count++;
                check /= 10;
                printf( " c = %d, check = %d, c / check = %d \n", c, check, c / check );
            }
        }
    }
    else
    count++;

    printf( "\nInteger %d consists %d 7's.\n", b, count );
    printf( "\n" );
    return 0;
}