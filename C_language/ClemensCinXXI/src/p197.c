#include "stdio.h"
#include "config.h"
#ifndef HAVE_STRDUP
char *strdup(char const *in){
    if(!in)
    return NULL;
    else{
    char *out;
    asprintf(&out, "%s", in);
    return out;
    }
}
#endif
int main(int argc, char **argv){
    printf( "Project version is %d", (PROJECT_VERSION_MAJOR) );
    printf( ".%d", PROJECT_VERSION_MINOR );
    printf( ".%d", PROJECT_VERSION_PATCH );
    printf( "\nExample on page 197, asprintf function.\n" );
    char *s1 = "Thread";
    char *s2;
    printf("\nInput new line:\n");
    asprintf(&s2, argv[0]);
    printf("%s, %s, size of argument2 is %zu.\n", s1, s2, sizeof(s2));
    char *s3 = strdup(s1);
    printf("\nDuplicate of s1 is %s.\n", s3);
    printf( "\nExample on page 198, string extension via asprintf function.\n" );
    char *q;
    asprintf(&q, "%s some else text. %s", s1, s2);
    printf("%s", q);
    asprintf(&q, "\n%s some else text. %s; %s\n", s1, s2, q);
    printf("%s", q);
    printf("\n");
    return 0;
}
    