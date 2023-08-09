#include "config.h"
#include "stdio.h"
#include "stdlib.h"
#include "time.h"
int rollDice();
int crebs();
int main()
{ 
    printf( "Project version is %d", (PROJECT_VERSION_MAJOR) );
    printf( ".%d", PROJECT_VERSION_MINOR );
    printf( ".%d", PROJECT_VERSION_PATCH );
    srand( time( 0 ) );
    printf("\nExersize on page 204.Multi crebs.\n");
    int wins = 0, loses = 0, result, count;
    printf( "\nInput game's number, you'd like to play: " );
    scanf( "%d", &count );
    for (int i = 0; i < count; i++)
    {
        result = crebs();
        if( result == 1 )
        wins++;
        else
        loses++;
    }
    printf( "\nDuring %d games wins = %d, loses = %d.\n", count, wins, loses );
    
    return 0;
}
int crebs()
{
    int gameStatus = 0, sum, point, a, b;
    a = rand()%6 + 1; b = rand()%6 + 1;
        sum = a + b;
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
            break;
        }
    while (gameStatus == 0)
    {
        a = rand()%6 + 1; b = rand()%6 + 1;
        sum = a + b;
        if( sum == point )
        gameStatus = 1;
        if( sum == 7 )
        gameStatus = 2;
    }
    return gameStatus;
}