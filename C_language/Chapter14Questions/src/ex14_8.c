#include "config.h"
#include "stdio.h"
#include "stdlib.h"
#include "time.h"
int main( int argc, char *argv[]){
    printf( "Project version is %d", (PROJECT_VERSION_MAJOR) );
    printf( ".%d", PROJECT_VERSION_MINOR );
    printf( ".%d", PROJECT_VERSION_PATCH );
    printf("\nExercise 14.8, record from one file to another in reverse order.\n");
    FILE *out, *in; char c; int count = 0;
    if((out = fopen(argv[1], "r")) != NULL){
        if((out = fopen(argv[2], "r+")) != NULL){
            while((c = getc(out)) != EOF){
                putchar(c);/*file output and finding out it's size*/
                count++;
            }
            printf("\nSize of char *text is %d.\n", count);
            char *text = malloc(count * sizeof(char));
            printf("\nCreate char * text.\n");
            count = 0;
            while((c = getc(out)) != EOF){
               text[count] = c;
               count++;
            }
            printf("\nChar text is:\n");
            for (int i = 0; i < count; i++)
            {
                printf("%c", text[i]);
            }
            
        }
    }
    printf("\nEnd of run.\n");
    return 0;
}