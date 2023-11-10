#include "config.h"
#include "stdio.h"
#include "string.h"
struct person{
    char last[15];
    char first[15];
    int age;
} one = {"unassigned", "", 0};
void input(FILE *);
void createTF(FILE *);
void edit(FILE *);
void delete(FILE *);
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
        printf("\nInput your choice:\n1 - to input record;\
        \n2 - to edit record;\n3 - to delete record;\
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
                case 3:
                delete(ptr);
                break;
                case 4:
                createTF(ptr);
                break;
                default:
                printf("\nYou've entered wrong choice.\n");
            }
            printf("\nInput your choice:\n1 - to input record;\
            \n2 - to edit record;\n3 - to delete record;\
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
    struct person one; int count = 0;
    while(!feof(cfptr))
    {
        fread( &one, sizeof(struct person), 1, cfptr );
        if(one.age != 0)
        count++;
    }
    printf("\nList already has %d records.\n", count);
    rewind(cfptr);
    printf("\nInput last, first names and age:");
    printf("\n? ");
    scanf("%s%s%d", one.last, one.first, &one.age );
    fseek(cfptr, (sizeof(struct person) * count), SEEK_SET);
    fwrite(&one, sizeof(struct person), 1, cfptr);
}
void edit(FILE *cfptr)
{
    rewind(cfptr);
    struct person one, two, three; int count = 0, existence = 0;
    printf("\nInput last and first names, age to edit record:\n");
    scanf("%s%s%d", two.last, two.first, &two.age);
    printf("\nYou request person is: %s %s, %d\n", two.last, two.first,\
     two.age);
    fread( &one, sizeof(struct person), 1, cfptr);
    while(!feof(cfptr))
    {
        count++;
        if(one.age != 0)
        printf("\nRecord #%d: %s %s, %d;\n", count, one.last, one.first,\
             one.age);
        if( strcmp(one.last, two.last) == 0 && strcmp(one.first, two.first) == 0\
         &&  one.age == two.age )
        {
            printf("\nInput new data:\n");
            scanf("%s%s%d", three.last, three.first, &three.age);
            fseek(cfptr, sizeof(struct person) * (count - 1), SEEK_SET);
            fwrite(&three, sizeof(struct person), 1, cfptr);
            existence++;
            break;
        }
        else
        fread( &one, sizeof(struct person), 1, cfptr);
    }
    if(existence == 0)
    printf("\nNo information about %s %s %d years old.\n", \
    two.last, two.first, two.age);
}
void createTF(FILE *cfptr)
{
    struct person one; 
    FILE *tfptr; int count = 0;
    if( (tfptr = fopen("result.txt", "w")) == NULL )
    printf("\nFile result.txt cannot be opened");
    else{
        rewind(cfptr);
        fprintf(tfptr, "%-3s%-9s%-9s%-3s","#", "Last", "First", "Age");
        fread(&one, sizeof(struct person), 1, cfptr);
        while(!feof(cfptr))
        {
            if(one.age != 0)
            {
                count++;
                fprintf(tfptr, "\n%-3d%-9s%-9s%-3d",count, one.last,\
                 one.first, one.age);
            }

            fread(&one, sizeof(struct person), 1, cfptr);
        }
        fclose(tfptr);
    }
}
void delete(FILE *cfptr)
{
    struct person one, two, empty = {"unassigned", "", 0};
    int count = 0, exist = 0;
    printf("\nInput last and first names, age to edit record:\n");
    scanf("%s%s%d", two.last, two.first, &two.age);
    printf("\nYou request person is: %s %s, %d years old.\n", two.last,\
     two.first, two.age);
    rewind(cfptr);
    fread(&one, sizeof(struct person),1, cfptr);
    while(!feof(cfptr))
    {
        if(one.age != 0)
        {
            count++;
            printf("\n%-3d%-9s%-9s%-3d", count, one.last, one.first, one.age);
        }  
        if( strcmp(one.last, two.last) == 0 && strcmp(one.first, two.first) == 0\
         && one.age == two.age )
            {
                exist++;
                fseek(cfptr, sizeof(struct person) * (count - 1), SEEK_SET);
                fwrite(&empty, sizeof(struct person), 1, cfptr);
                printf("\nRecord %-3d%-9s%-9s%-3d destroyed.\n", count, one.last,\
                 one.first, one.age);
                break;
            }
             else
             fread(&one, sizeof(struct person), 1, cfptr);
    }
    if(exist == 0)
    printf("\nNo information about %s %s %d years old.\n", \
    two.last, two.first, two.age);
}