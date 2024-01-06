#include "config.h"
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <signal.h>
void signalHandler(int);
void print();
int main(){
    printf( "Project version is %d", (PROJECT_VERSION_MAJOR) );
    printf( ".%d", PROJECT_VERSION_MINOR );
    printf( ".%d", PROJECT_VERSION_PATCH );
    printf( "\nEx on p614, sygnal processing.\n" );
    int x;
    srand(time(0));
    signal(SIGINT, signalHandler);
    for(int i = 0; i < 100; i++){
        x = rand()%50 + 1;

        if(x == 25)
        raise(SIGINT);

        printf("%4d", i);
        if((i + 1) % 10 == 0)
        printf("\n");
    }
    printf("\nEnd of run.\n");
    return 0;
}
void signalHandler(int signalValue){
    int response;
    printf("%s%d%s\n%s", "\nInterrupt signal ( ", response, " ) received.", \
    "Do you want to continue?\n1 - yes; 2 - no\n");
    scanf("%d", &response);
    while(response != 1 && response != 2){
        printf("Do you want to continue?\n1 - yes; 2 - no\n");
        scanf("%d", &response);
    }
    if(response == 1)
    signal(SIGINT, signalHandler);
    else
    exit(EXIT_SUCCESS);
}