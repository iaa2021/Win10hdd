#include "config.h"
#include "stdio.h"
struct person{
    char last[15];
    char first[15];
    int age;
} one = {"unassigned", "", 0};
int main()
{
    printf( "Project version is %d", (PROJECT_VERSION_MAJOR) );
    printf( ".%d", PROJECT_VERSION_MINOR );
    printf( ".%d", PROJECT_VERSION_PATCH );
    printf( "\nExersise 11.11, creating nameage.txt arbitrary file.\n" );
    FILE *ptr;
    if( (ptr = fopen( "nameage.txt", "w" )) == NULL )
    printf("\nFile nameage.txt cannot be opened");
    else
    {
        for(int i = 0; i < 100; i++)
        fwrite(&one, sizeof(struct person), 1, ptr);
        
        fclose(ptr);
    }
    return 0;
}