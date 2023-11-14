#include "config.h"
#include "stdio.h"
#include "stdlib.h"
#include "time.h"
int main()
{
    printf( "Project version is %d", (PROJECT_VERSION_MAJOR) );
    printf( ".%d", PROJECT_VERSION_MINOR );
    printf( ".%d", PROJECT_VERSION_PATCH );
    printf( "\nExersise on 11.13, phone number via letters.\n" );
    srand(time(0));
    int array[10][3] = { 0 }; int number = 0;
    char numbLetters[7][3];
    int phoneNumber[7] = {0};
    char *alphabeth = "abcdefghijklmnoprstuvxyz";
    for(int i = 2; i < 10; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            array[i][j] = number;
            number++;
        }
    }
    for(int i = 2; i < 10; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            printf("%c, ",alphabeth[array[i][j]]);
        }
        printf("\n");
    }
    printf("\nGenering phone number:\n");
    for(int i = 0; i < 7; i++)
        phoneNumber[i] = rand()%7 + 2;
    printf("\nGenered phone number is:\n");
    for(int i = 0; i < 7; i++)
    {
        if(i == 2)
        printf("%d-", phoneNumber[i]);
        else
        printf("%d", phoneNumber[i]);
    }
    printf("\nPhone number via letters:\n");
    for(int i = 0; i < 7; i++)/*pass by phone numbers*/
    {
        for(int j = 0; j < 3; j++)/*pass by literal value of the number*/
        {
            printf("%c", alphabeth[array[phoneNumber[i]][j]]);
            numbLetters[i][j] = alphabeth[array[phoneNumber[i]][j]];
        }
        printf("-");
    }
    printf("\nNumber accomplishes in array numbLetters:\n");
    for(int i = 0; i < 7; i++)/*pass by phone numbers*/
    {
        for(int j = 0; j < 3; j++)/*pass by literal value of the number*/
        {
            printf("%c", numbLetters[i][j]);
        }
        printf(" - ");
    }
    printf("\nPossible words:\n");
    for(int i = 0; i < 100; i++)
    {
        for(int j = 0; j < 7; j++)
        {
            int k = rand()%2;
            printf("%c", numbLetters[j][k]);
        }
        if(((i+1) % 10) == 0)
        printf(",\n");
        else
        printf(", ");
    }
    printf("\n");
    return 0;
}