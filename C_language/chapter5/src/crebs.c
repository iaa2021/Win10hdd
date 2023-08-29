#include "config.h"
#include "stdio.h"
#include "stdlib.h"
#include "time.h"
int rollDice();
int main()
{ 
    printf( "Project version is %d", (PROJECT_VERSION_MAJOR) );
    printf( ".%d", PROJECT_VERSION_MINOR );
    printf( ".%d", PROJECT_VERSION_PATCH );
    printf("\nExersize on page 204.Crebs.\n");
    srand( time( 0 ) );
    int gameStatus = 0, sum, point;
        sum = rollDice();
        switch (sum)
        {
        case 7: case 11:
            gameStatus = 1;
            break;
        case 2: case 3: case 12:
            gameStatus = 2;
            break;
        default:
            point = sum;
            gameStatus = 0;
            printf( "\nPoint is %d.\n", sum );
            break;
        }
    while (gameStatus == 0)
    {
        sum = rollDice();
        if( sum == point )
        gameStatus = 1;
        if( sum == 7 )
        gameStatus = 2;
    }
    if( gameStatus == 1 )
    printf( "\nYou've won with point %d.\n", sum );
    else
    printf( "\nYou've lost with point %d.\n", sum );
    return 0;
}
int rollDice()
{
    int a, b, sum;
    a = rand()%6 + 1; b = rand()%6 + 1;
    sum = a + b;
    return sum;
}