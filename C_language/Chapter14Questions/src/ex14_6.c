#include "config.h"
#include "stdio.h"
#include "stdlib.h"
#include "time.h"
#include "signal.h"
void signalHandler(int);
void signalAbortHandler(int);
int main( int argc, char *argv[]){
    printf( "Project version is %d", (PROJECT_VERSION_MAJOR) );
    printf( ".%d", PROJECT_VERSION_MINOR );
    printf( ".%d", PROJECT_VERSION_PATCH );
    printf("\nExercise 14.6, processing signals SIGABRT and SIGINT.\n");
    int data;
    srand(time(0));
    signal(SIGINT, signalHandler);
    for (int i = 0; i < 100; i++)
    {
        data = rand()%50 + 1;
        if(data == 25)
        raise(SIGINT);

        printf("%3d, ", i);
        if((i + 1)%10 == 0)
        printf("\n");
    }
    printf("%s%s", "\nTesting SIGABRT signal with abort function.\n", "Input value, if 11 - launch abort:\n");
    signal(SIGABRT, signalAbortHandler);
    scanf("%d", &data);
    if(data == 11){
        printf("\nProgram terminated via abort function.\n");
        raise(SIGABRT);
    }
    printf("%s%s", "\nTesting SIGINT signal via EOF character.\n"\
    "Input EOF to raise SIGINT: ");
    signal(SIGINT, signalHandler);
    char c;
    scanf("%c", &c);
    while (c != EOF)
    {
       printf( "Input EOF to raise SIGINT: ");
       scanf("%c", &c);
    }
    if(c == EOF)
    raise(SIGINT);
    
    printf("\nEnd of run.\n");
    return 0;
}
void signalHandler(int value){
    int response;
    printf("%s%d%s\n%s", "\nInterrupt signal (", value, ") received.\n",\
    "Do you wish to continue?\n1 - yes, 2 - no:\n");
    scanf("%d", &response);
    while (response != 1 && response != 2){
        printf("Print 1 - yes or 2 - no:\n");
        scanf("%d", &response);
    }
    if(response == 1)
    signal(SIGINT, signalHandler);
    else
    exit(EXIT_SUCCESS);
}
void signalAbortHandler(int value){
    printf("%s%d%s\n%s", "\nInterrupt signal (", value, ") received.\n");
    abort();
}