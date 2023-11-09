#include "config.h"
#include "stdio.h"
int main()
{
    printf( "Project version is %d", (PROJECT_VERSION_MAJOR) );
    printf( ".%d", PROJECT_VERSION_MINOR );
    printf( ".%d", PROJECT_VERSION_PATCH );
    printf( "\nExersise 11.10, processing trans.txt, oldmast.txt\
     & creation newmast.txt.\n" );
    int acc, tAcc; double transaction, balance;
    FILE *tfPtr; FILE *ofPtr; FILE *nfPtr;

    /*if((tfPtr = fopen("trans.txt", "r")) == NULL)
    printf("\nFile trans.txt cannot be opened");*/
    /*if((nfPtr = fopen("newmast.txt", "w")) == NULL)
    printf("\nFile newmast.txt cannot be opened");*/
    int accs[10] = {0}, count = 0; double balances[10] = {0.0};
    if((ofPtr = fopen("oldmast.txt", "r")) == NULL)
    printf("\nFile oldmast.txt cannot be opened");
    else
    {
        fscanf(ofPtr, "%d%lf", &acc, &balance);
    }
    while(!feof(ofPtr))
    {
        if( acc != 0)
        printf("\n%d\t%lf\n", acc, balance);  
      
        fscanf(ofPtr, "%d%lf", &acc, &balance);
    }
    /*printf("\n%-10s%-7s\n", "Account", "Balance");
    for(int i = 0; i < 10; i++)
    {
        if(accs[i] != 0)
        printf("\n%-10d%-7lf\n", accs[i], balances[i]);
    }*/
    fclose(ofPtr); fclose(tfPtr); fclose(nfPtr);
    printf( "\n" );
    return 0;
}