#include "config.h"
#include "stdio.h"
#include "stdlib.h"
#include "time.h"
int rollDice();
int crebs( int );
int main()
{ 
    printf( "Project version is %d", (PROJECT_VERSION_MAJOR) );
    printf( ".%d", PROJECT_VERSION_MINOR );
    printf( ".%d", PROJECT_VERSION_PATCH );
    printf("\nExersize on page 204.Crebs.\n");
    srand( time( 0 ) );
    int balance = 1000, bet;
    do{
    printf( "\nMake your bet, 0 to end game: " );
    scanf( "%d", &bet );
    if( bet > balance )
    printf( "\nYou've not enough money.\n" );
    else if( bet == balance )
    {
        printf ( "\nAll in?" );
        balance += crebs( bet );
        printf( "\nBalance = %d\n", balance );
    }
    else
    {
        balance += crebs( bet );
        printf( "\nBalance = %d\n", balance );
    }
    if( balance == 0 )
    {
        printf( "\nYou've totally lost.\n" );
        break;
    }
    }while( bet != 0 || balance != 0 );
    
    return 0;
}
int crebs( int bet )
{
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
    {
        printf( "\nYou've won with point %d, bet = %d.\n", sum, bet );
        return bet;
    }
    else
    {
        printf( "\nYou've lost with point %d, bet = %d.\n", sum, bet );
        return -1 * bet;
    }
}
int rollDice()
{
    int a, b, sum;
    a = rand()%6 + 1; b = rand()%6 + 1;
    sum = a + b;
    return sum;
}