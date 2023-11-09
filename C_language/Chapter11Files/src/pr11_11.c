#include "config.h"
#include "stdio.h"
struct person{
    char last[15];
    char first[15];
    char age[2];
} one = {"unassigned", "", "0"};
void input(FILE *);
/*void createTF(FILE *);*/
void edit(FILE *);
/*void delete(FILE *);*/
int main()
{
    printf( "Project version is %d", (PROJECT_VERSION_MAJOR) );
    printf( ".%d", PROJECT_VERSION_MINOR );
    printf( ".%d", PROJECT_VERSION_PATCH );
    printf( "\nExersise 11.11, processing nameage.txt arbitrary file.\n" );
    FILE *ptr; char last[15], first[15], age[2]; int choice;
    if( (ptr = fopen( "nameage.txt", "r+" )) == NULL )
    printf("\nFile nameage.txt cannot be opened");
    else
    {
        printf("\nInput your choice:\n1 - to input record;\n\
        2 - to edit record;\n3 - to delete record;\
        \n4 - create text file;\n0 - to quit.");
        printf("\n? ");
        scanf("%d", &choice);
        while( choice != 0 )
        {
            switch(choice)
            {
                case 1:
                input(ptr);
                break;
                case 2:
                edit(ptr);
                break;
                /*case 3:
                delete(ptr);
                break;
                case 4:
                createTF(ptr);
                break;*/
                default:
                printf("\nYou've entered wrong choice.\n");
            }
            printf("\nInput your choice:\n1 - to input record;\n\
            2 - to edit record;\n3 - to delete record;\
            \n4 - create text file;\n0 - to quit.");
            printf("\n? ");
            scanf("%d", &choice);
        }
        fclose(ptr);
    }
    return 0;
}
void input(FILE *cfptr)
{
    rewind(cfptr);
    struct person one;
    printf("\nInput last, first names and age:");
    printf("\n? ");
    scanf("%s%s%s", one.last, one.first, one.age );
    fwrite(&one, sizeof(struct person), 1, cfptr);
}
void edit(FILE *cfptr)
{
    rewind(cfptr);
    struct person one, two, three; int count = 0, existence = 0;
    printf("\nInput last and first names, age to edit record:\n");
    scanf("%s%s%s", two.last, two.first, two.age);
    while(feof(cfptr))
    {
        fread( &one, sizeof(struct person), 1, cfptr);
        count++;
        if(one.last == two.last && one.first == two.first && \
        one.age == two.age )
        {
            printf("\nInput new data:\n");
            scanf("%s%s%s", three.last, three.first, three.age);
            fseek(cfptr, sizeof(struct person) * (count - 1), SEEK_SET);
            fwrite(&three, sizeof(struct person), 1, cfptr);
            existence++;
        }
    }
    if(existence == 0)
    printf("\nNo information about%s %s %s years old.\n", \
    two.last, two.first, two.age);
}