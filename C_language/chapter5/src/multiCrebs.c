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
    int wins = 0, loses = 0, wins1 = 0, loses1 = 0, result, count;
    printf( "\nInput game's number, you'd like to play: " );
    scanf( "%d", &count );
    for (int i = 0; i < count; i++)
    {
        result = crebs();
        switch (result)
        {
        case 1:
            wins++;
            break;
        case 2:
            loses++;
            break;
        case 3:
            wins1++;
            break;
        case 4:
            loses1++;
            break;
        default:
            break;
        }
    }
    printf( "\nFor %d games 1 roll wins = %d, 1 roll loses = %d,\n", count, wins, loses );
    printf( "\nwins after 1 roll = %d, loses after 1 roll = %d.\n", wins1, loses1 );
    printf( "\nTotal wins = %d, total loses = %d.\n", wins + wins1, loses + loses1 );
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
        gameStatus = 3;
        if( sum == 7 )
        gameStatus = 4;
    }
    return gameStatus;
}