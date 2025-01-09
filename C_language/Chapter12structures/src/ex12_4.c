#include "config.h"
#include "stdio.h"
#include "stdlib.h"
#include "string.h"
struct gradeNode{
    char last[20];
    double grade;
    struct gradeNode *next;
} *start = NULL;
typedef struct gradeNode GRADENODE;
typedef struct gradeNode* GRADENODEPTR;
void insert(GRADENODEPTR *, double, char *);
void print(GRADENODEPTR);
char *delete(GRADENODEPTR *, char *);
int isEmpty(GRADENODEPTR);
int main()
{
    printf( "Project version is %d", (PROJECT_VERSION_MAJOR) );
    printf( ".%d", PROJECT_VERSION_MINOR );
    printf( ".%d", PROJECT_VERSION_PATCH );
    printf( "\nEx 12.4, linked list.\n" );
    int choice; double value; char lname[20];
    printf("\nInput choice, 1 - to insert, 3 - print, 2 - to delete, 0 to end input: ");
    scanf("%d", &choice);
    while(choice != 0){
        switch(choice){
            case 1:
            {
            printf("\nInput grade: ");
            scanf("%lf", &value);
            printf("\nInput last name: ");
            /*fgets(lname, sizeof(lname), stdin);*/
            scanf("%20s", lname);
            insert(&start, value, lname);
            }
            break;
            case 2:
            if(!isEmpty(start)){
                printf("\nInput last name, which position to be deleted:\n");
                scanf("%20s", lname);
                if(delete(&start, lname))
                printf("\n%s deleted.\n", lname);
                else
                printf("\n%s wasn't found.\n", lname);
            }
            else
            printf("\nThe list is empty.\n");
            break;
            case 3:
            print(start);
            break;
            default:
            printf("\nYou've entered wrong choice.\n");
            break;
        }
        printf("\nInput choice, 1 - insert, 2 - to delete, 3 - print, 0 to end input: ");
        scanf("%d", &choice);
    }
    return 0;
}
void insert(GRADENODEPTR *start, double value, char *text){
    GRADENODEPTR previous, current, new;
    char name[20];
    new = malloc(sizeof(GRADENODE));
    if(new != NULL){
        new ->grade = value;
        strcpy(new ->last, text);
        new ->next = NULL;
        previous = NULL;
        current = *start;
        while(current != NULL && strcmp(new ->last, current ->last) > 0){
            previous = current;
            current = current ->next;
        }
        if(previous == NULL){
            new ->next = *start;
            *start  = new;
        }
        else{
            previous ->next = new;
            new ->next = current;
        }
    }
    else
    printf("\nNo memory availiable.\n");
}
void print(GRADENODEPTR start){
    while(start != NULL){
        printf("%-10s%4.2lf\n", start ->last, start ->grade);
        start = start ->next;
    }
}
char *delete(GRADENODEPTR *start, char *name){
    GRADENODEPTR current, previous, temp;
        if(strcmp((*start) ->last, name) == 0){
            temp = *start;
            *start = (*start) ->next;
            free(temp);
            return name;
            }
        else{
            current = (*start) ->next; previous = *start;
            while(current != NULL && strcmp(current -> last, name) != 0){
            previous = current;
            current = current ->next;
            }
            if(current != NULL){
                temp = current;
                previous ->next = current ->next;
                free(temp);
                return name;
            }
        }
    return '\0';
}
int isEmpty(GRADENODEPTR start){
    return start == NULL;
}