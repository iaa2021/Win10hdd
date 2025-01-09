#include "config.h"
#include "stdio.h"
#include "stdlib.h"
#include "time.h"
int myltiply( int, int );
int main()
{ 
    printf( "Project version is %d", (PROJECT_VERSION_MAJOR) );
    printf( ".%d", PROJECT_VERSION_MINOR );
    printf( ".%d", PROJECT_VERSION_PATCH );
    printf( "\nExersise 5.32 multiply table:\n" );
    srand( time( 0 ) );
    int count, answers = 0;
    printf( "\nInput attempt's number: " );
    scanf( "%d", &count );
    for (int i = 0; i < count; i++)
    {
        int a = rand()%9 + 1;
        int b = rand()%9 + 1;
        answers += myltiply( a, b );
    }
    printf( "\nYou've made %d right answers from %d attempts.\n", answers, count );
    double c = (double)answers / (double)count;
    printf( "\nResult is %.2lf\n", c );
    if( c < 0.75 )
    printf( "\nPlease, ask your teacher for help.\n" );
    return 0;
}
int myltiply( int a, int b )
{
    char *array[8] = { "Very good!", "Exelent!", "Nice work!",\
    "Keep up the good work!", "\nWrong answer.\n", "\nTry again",\
    "\nDon't give up\n", "\nNo, keep trying" };
    int c, d;
    printf( "\n%d * %d = ? ", a, b );
    scanf( "%d", &d );
    if( d == a * b ){
        c = rand()%4;
        printf( "%s", array[ c ] );
        return 1;
    }
    else
    {
        c = rand()%4 + 4;
        printf( "%s", array[ c ] );
        return 0;
    }
}