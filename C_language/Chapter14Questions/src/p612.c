#include "config.h"
#include "stdio.h"
#include "math.h"
#include <stdlib.h>
void print();
int main(){
    printf( "Project version is %d", (PROJECT_VERSION_MAJOR) );
    printf( ".%d", PROJECT_VERSION_MINOR );
    printf( ".%d", PROJECT_VERSION_PATCH );
    printf( "\nEx on p612, using temp files.\n" );
    FILE *filePtr, *tempFilePtr;
    int c; char fileName[30];
    printf("\nThis program changes spaces to tabs.\n"\
     "Enter file name to be modified.\n");
    scanf("%s", fileName);
    if((filePtr = fopen(fileName, "r+")) != NULL){
        if((tempFilePtr = tmpfile()) != NULL){
            printf("\nTemp file before modification is:\n");
            while((c = getc(filePtr)) != EOF){
                putchar(c);
                putc(c == ' '? '\t': c, tempFilePtr);
            }
            rewind(tempFilePtr);
            rewind(filePtr);
            printf("\nTemp file after modification is:\n");
            while((c = getc(tempFilePtr)) != EOF){
                putchar(c);
                putc(c, filePtr);
            }
        }
        else
        printf("\nUnable to open temporary file.\n");
    }
    else
        printf("\nUnable to open %s file.\n", fileName);
    printf("\nEnd of run.\n");
    return 0;
}