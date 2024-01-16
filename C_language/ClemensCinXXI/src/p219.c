#include "stdio.h"
#include "config.h"
#define Foreach_string(iterator, ...) for(char **iterator = (char *[]){__VA_ARGS__, NULL}; *iterator;)

int main(){
    printf( "Project version is %d", (PROJECT_VERSION_MAJOR) );
    printf( ".%d", PROJECT_VERSION_MINOR );
    printf( ".%d", PROJECT_VERSION_PATCH );
    printf( "\nExample on page 219, initiate string array via complex literal.\n" );
    char *str = "thread";
    Foreach_string(i, "yarn", str, "rope"){
        printf("%s, ", *i);
    }
    printf("\n");
    return 0;
}