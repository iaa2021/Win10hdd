#include "config.h"
#include "stdio.h"
#include "string.h"

int main()
{ 
    printf( "Project version is %d", (PROJECT_VERSION_MAJOR) );
    printf( ".%d", PROJECT_VERSION_MINOR );
    printf( ".%d", PROJECT_VERSION_PATCH );
    printf( "\nExersise on page 427, %%p, %%n formats:\n" );
    int *ptr; int x = 12345, y;
    ptr = &x;
    printf( "The value of ptr = %p\n", ptr );
    printf( "The address of x = %p\n", &x );
    printf( "Total characters printed in this line is: %n", &y );
    printf( "%d\n", y );
    printf( "\nPrinting %% in format string.\n" );
    printf( "\nExersise on page 429, presision for int, float, char *:\n" );
    x = 873; double y1 = 123.65476;
    char *string = "\nHappy birthday.\n";
    printf( "Using presision for integers:\n" );
    printf( "\t%.4d\n\t%.9d\n", x, x );/*with . output with zero before number*/
    printf( "Finding out the length of string via %%n specificator:\n" );
    char *text = "Hello world again"; int a;
    printf( "%s%n", text, &a );
    printf( "\nThe text's length = %d\n", a );
    printf( "\nThe text's length in 8'format = %#o\n", a );
    printf( "\nThe text's length in 16'format = %#x\n", a );
    char text1[100];
    printf( "\nInput text:\n" );
    fgets( text1, 100, stdin );
    puts(text1);
    int n[10];
    printf( "\nInput less or equal 10 integers:\n" );
    scanf( "%[^a]", n );
    printf( "\nArray is:\n" );
    for (size_t i = 0; i < 10; i++)
    {
        printf( "%d, ", n[i] );
    }
    
    printf( "\n" );
    return 0;
}