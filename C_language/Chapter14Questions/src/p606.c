#include "config.h"
#include "stdio.h"
#include "math.h"

int main( int argc, char *argv[]){
    printf( "Project version is %d", (PROJECT_VERSION_MAJOR) );
    printf( ".%d", PROJECT_VERSION_MINOR );
    printf( ".%d", PROJECT_VERSION_PATCH );
    printf( "\nEx on p610, command line's arguments.\n" );
    FILE *inFilePtr, *outFilePtr;
    int c;
    if(argc != 3)
    printf("\nUsage: p606 infile outfile\n");

    else{
        if((inFilePtr = fopen(argv[1], "r")) != NULL){
            if((outFilePtr = fopen(argv[2], "w")) != NULL){
                while((c = fgetc(inFilePtr)) != EOF)
                fputc(c, outFilePtr);
            }
            else
        printf("\nFile %s cannot be opened.\n", argv[2]);
        }
        else
        printf("\nFile %s cannot be opened.\n", argv[1]);
    }
    printf("\nEnd of run.\n");
    return 0;
}