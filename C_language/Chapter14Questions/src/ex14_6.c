#include "config.h"
#include "stdio.h"
#include "stdlib.h"
#include "time.h"
#include "signal.h"
void signalHandler(int);
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
        else{
            printf("%3d, ", i);
            if((i + 1)/10 == 0)
            printf("\n");
        }
    }
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