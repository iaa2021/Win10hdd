#include "config.h"
#include "stdio.h"
int main( int argc, char *argv[]){
    printf( "Project version is %d", (PROJECT_VERSION_MAJOR) );
    printf( ".%d", PROJECT_VERSION_MINOR );
    printf( ".%d", PROJECT_VERSION_PATCH );
    printf("\nExercise 14.5, pasting spaces among symbols in file.\n");
    FILE *filePtr, *tempFilePtr; char c;
    if((filePtr = fopen(argv[1], "r+")) != NULL){
        if((tempFilePtr = tmpfile()) != NULL){
            printf("\nThe file before processing is:\n");
            while ((c = getc(filePtr)) != EOF)
            {
                putchar(c);
                if(c != ' '){
                    putc(c, tempFilePtr);
                    putc(' ', tempFilePtr);
                }
            }
            rewind(filePtr);
            rewind(tempFilePtr);
            printf("\nThe file after processing is:\n");
            while ((c = getc(tempFilePtr)) != EOF){
                putchar(c);
                putc(c, filePtr);
            }
        }
        else
        printf("\nUnable to open temporary file.\n");
    }
    else
    printf("\nUnable to open %s file.\n", argv[1]);
    

    printf("\nEnd of run.\n");
    return 0;
}