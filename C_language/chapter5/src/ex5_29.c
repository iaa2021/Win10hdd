#include "config.h"
#include "stdio.h"
#include "string.h"
#include "math.h"
int myGCD( int, int );
int gcd( int, int );
int main()
{ 
    printf( "Project version is %d", (PROJECT_VERSION_MAJOR) );
    printf( ".%d", PROJECT_VERSION_MINOR );
    printf( ".%d", PROJECT_VERSION_PATCH );
    printf( "\nExersise 5.29 greater common deleter:\n" );
    printf( "Include 2 integers:\n" );
    int a, b;
    scanf( "%d%d", &a, &b );
    printf( "\nGCD via myGCD = %d\n", myGCD( a, b ) );
    printf( "\nGCD via recursion gcd = %d\n", gcd( a, b ) );
    printf( "\n" );
}
int myGCD( int a, int b )
{
    int count = a, deleter;
    if( a < b )
    count = b;
    for (int i = 1; i <= count; i++)
    {
        if( a % i == 0 && b % i == 0 )
        deleter = i;
    }
    return deleter;
}
int gcd( int a, int b )
{
    if( b == 0 )
    return a;
    else
    return gcd( b, a % b );
}