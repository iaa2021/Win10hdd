#include "config.h"
#include "stdio.h"
#include "string.h"
#include "math.h"
#define SIZE 80 
#define SIZE1 40
void wordNumbers( double );
int main()
{ 
    printf( "Project version is %d", (PROJECT_VERSION_MAJOR) );
    printf( ".%d", PROJECT_VERSION_MINOR );
    printf( ".%d", PROJECT_VERSION_PATCH );
    printf( "\nExersise 8.38, numbers via words:\n" );
    char *array[3][9] = {
        { "one", "two", "three", "four", "five", "six", "seven", \
        "eight", "nine" },
        { "eleven", "twelve", "thirteen", "forteen", "fifteen", \
            "sixteen", "seventeen", "eighteen", "nineteen"},
        { "ten","twenty", "thirty", "forty", "fifty", "sixty", \
        "seventy", "eighty", "ninety" }
    };
    int number, cents; double sum;
    printf( "\nInput sum $.\u00A2\n:\n" );
    scanf( "%lf", &sum );
    number = (int)floor(sum); 
    cents = (int)( sum * 100 ) - number * 100 ;
    printf( "\nSum is: %d$ %d\u00A2\n", number, cents );
    /*int numbers[] = { 1000000, 1000, 100, 10 };
    char *ranks[] = {"million", "thousand", "hundreed", " "};
    for (size_t i = 0; i < 4; i++)
    {
        int j = number / numbers[i], k;
        if( j > 0 )
        { 
            if( j % 10 == 0 )
            printf( " %s %s ", array[2][j/10 -1], ranks[i] );
            if (i == 2)
            printf( " %s %s", array[0][j - 1], ranks[i] );
            else if (i == 3)
            printf( " %s %s", array[2][j - 1],\
            array[0][ (number % numbers[i]) - 1 ] );
            else if( j < 10 )
            printf( "%s %s ", array[0][j - 1], ranks[i] );
            else if (j > 10 && j < 20)
            printf( "%s %s ", array[1][j - 11], ranks[i] );
            else if (j > 20 && j < 100)
            printf( " %s %s %s", array[2][(j/10) - 1],\
            array[0][(j%10) - 1], ranks[i] );
            else if (j >= 100 && j < 1000)
            {
                k = j % 100;
                printf( " %s %s ", array[0][(j/100) - 1], ranks[2] );
                if( k > 0 )
                {
                    if( k % 10 == 0 )
                    printf( " %s %s ", array[2][k/10 -1], ranks[i] );
                    if( k < 10 )
                    printf( "%s %s ", array[0][k - 1], ranks[i] );
                    else if (k >= 10 && j < 20)
                    printf( "%s %s ", array[1][k - 11], ranks[i] );
                    else if (j >= 20 && j < 100)
                    printf( " %s %s %s", array[2][(k/10) - 1],\
                    array[0][(k%10) - 1], ranks[i] );
                }
            }
        }
        number %= numbers[i];
    }
    printf( "$, %d\u00A2\n", cents );*/
    wordNumbers(sum);
    printf( "\n" );
    return 0;
}
void wordNumbers( double sum )
{
    int number = floor( sum ), cents = (int)(sum * 100) - number;
    char *array[3][9] = {
        { "one", "two", "three", "four", "five", "six", "seven", \
        "eight", "nine" },
        { "eleven", "twelve", "thirteen", "forteen", "fifteen", \
            "sixteen", "seventeen", "eighteen", "nineteen"},
        { "ten","twenty", "thirty", "forty", "fifty", "sixty", \
        "seventy", "eighty", "ninety" }
    };
    number = (int)floor(sum); 
    cents = (int)( (sum - floor(sum)) * 100 );
    int numbers[] = { 1000000, 1000, 100, 10 };
    char *ranks[] = {"million", "thousand", "hundreed", " "};
    for (size_t i = 0; i < 4; i++)
    {
        int j = number / numbers[i];
        if( j > 0 )
        {
            if( i == 3 )
            printf( " %s %s ", array[2][j - 1],\
             array[0][number % numbers[i] - 1] );
            else if( j < 10 )
            printf( " %s %s ", array[0][j - 1], ranks[i] );
            else if( j > 10 && j < 20 )
            printf( " %s %s ", array[1][j - 11], ranks[i] );
            else if( j > 20 && j < 100 && j % 10 != 0 )
            printf( " %s %s %s ", array[2][(j/10) - 1],\
             array[0][(j%10) - 1], ranks[i] );
            else if( j < 100 && j % 10 == 0 )
            printf( " %s %s ", array[2][(j/10) - 1], ranks[i] );
            else if ( j >= 100 && j < 1000 )
            {
                int k = j;
                printf( " %s %s ", array[0][(k/100) - 1], ranks[2] );
                k %= 100;
                if( k < 10 )
                printf( " %s %s ", array[0][k - 1], ranks[i] );
                else if( k > 10 && k < 20 )
                printf( " %s %s ", array[1][k - 11], ranks[i] );
                else if( k > 20 && k < 100 && k % 10 != 0 )
                printf( " %s %s %s ", array[2][(k/10) - 1],\
                array[0][(k%10) - 1], ranks[i] );
                else if( k % 10 == 0 )
                printf( " %s %s ", array[2][(j/10) - 1], ranks[i] );
            }
        }
        number %= numbers[i];
    }
    printf( "$, %d\u00A2\n", cents );
}