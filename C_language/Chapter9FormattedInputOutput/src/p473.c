#include "config.h"
#include "stdio.h"
#include "stdlib.h"
#include "time.h"
struct bitCard
{
    unsigned suit : 2;
    unsigned face : 4;
    unsigned colour : 1;
};
typedef struct bitCard Card;
void shuffle( Card * );
void deal( Card * );
int main()
{ 
    printf( "Project version is %d", (PROJECT_VERSION_MAJOR) );
    printf( ".%d", PROJECT_VERSION_MINOR );
    printf( ".%d", PROJECT_VERSION_PATCH );
    printf( "\nExersise on page 473, desk of cards.\n" );
    Card desk[52];
    
    srand( time( 0 ) );
    shuffle(desk);
    deal(desk);
    printf( "\n" );
    return 0;
}
void shuffle( Card *desk )
{
    for (int i = 0; i < 52; i++)
    {
        desk[i].suit = i / 13;
        if( i < 0 )
        i *= ( -1 );
        desk[i].face = i % 13;
        (i < 0)? i *= ( -1 ):i;
        desk[i].colour = i / 26;
        (i < 0)? i *= ( -1 ):i;
    }
    for (int i = 0; i < 52; i++)
    {
        Card hold; int j = rand()%52;
        hold = desk[i];
        desk[i] = desk[j];
        desk[j] = hold;
    }
}
void deal( Card *desk )
{
    char *wsuit[] = { "clubs", "spades", "hearts", "diamonts" };
    char *wface[] = { "2", "3", "4", "5", "6", "7", "8", "9", "10",\
    "Jack", "Qween", "King", "Ace" };
    char *wcolour[] = { "black", "red" };
    for (int i = 0; i < 52; i++)
    {
        printf( "%-5s of %-8s %-5s\t\t", wface[desk[i].face],\
        wsuit[desk[i].suit], wcolour[desk[i].colour] );
        if( ( i + 1) % 2 == 0 )
        printf( "\n" );
    }
}