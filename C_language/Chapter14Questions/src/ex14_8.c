#include "config.h"
#include "stdio.h"
#include "stdlib.h"
#include "time.h"
#include "string.h"
int main( int argc, char *argv[]){
    printf( "Project version is %d", (PROJECT_VERSION_MAJOR) );
    printf( ".%d", PROJECT_VERSION_MINOR );
    printf( ".%d", PROJECT_VERSION_PATCH );
    printf("\nExercise 14.8, record from one file to another in reverse order.\n");
    FILE *out, *in; char c; int count = 0;
    if((out = fopen(argv[1], "r")) != NULL){
        if((in = fopen(argv[2], "w")) != NULL){
            // Find the size of the file
            fseek(out, 0, SEEK_END);
            size_t fileSize = ftell(out);
            rewind(out);
            printf("\nSize of char *text via chat GPT is %zu.\n", fileSize);
            while((c = getc(out)) != EOF){
                putchar(c);/*file output and finding out it's size*/
                count++;
            }
            rewind(out);
            printf("\nSize of char *text is %d.\n", count);
            printf("\nCreate reverse file.\n");
            char *content = (char *)malloc((sizeof(char) * (count + 1)));
            count = 0;
            while((content[count] = getc(out)) != EOF){
                count++;
            }
            count = (int)fileSize + 1;
            content[count] = '\0';
            printf("\nSize of char *text is %d.\n", count);
            printf("\nChar text is:\n");
            for (int i = 0; i < count; i++)
            {
                printf("%c", content[i]);
            }
            for (int i = count; i >= 0; i--)
            {
                fputc(content[i], in);
            }
            
            free(content);
        }
    }
    printf("\nEnd of run.\n");
    return 0;
}
/*#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 1000

int main() {
    FILE *inputFile, *outputFile;
    char content[MAX_SIZE];
    long fileSize;

    // Open the input file in read mode
    inputFile = fopen("input.txt", "r");

    if (inputFile == NULL) {
        perror("Error opening input.txt");
        return 1;
    }

    // Open the output file in write mode
    outputFile = fopen("output.txt", "w");

    if (outputFile == NULL) {
        perror("Error opening output.txt");
        fclose(inputFile);
        return 1;
    }

    // Find the size of the file
    fseek(inputFile, 0, SEEK_END);
    fileSize = ftell(inputFile);
    rewind(inputFile);

    // Read the content from the file
    if (fileSize < MAX_SIZE) {
        fread(content, sizeof(char), fileSize, inputFile);

        // Write the content in reverse order to the output file
        for (long i = fileSize - 1; i >= 0; i--) {
            fputc(content[i], outputFile);
        }

        printf("Content reversed and written to output.txt successfully.\n");
    } else {
        printf("File size exceeds the maximum buffer size.\n");
    }

    // Close the files
    fclose(inputFile);
    fclose(outputFile);

    return 0;
}*/