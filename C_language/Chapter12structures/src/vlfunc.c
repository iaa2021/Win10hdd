#include "config.h"
#include "stdio.h"
#include "stdlib.h"
#include "time.h"
#include "stdarg.h"
double average(int, ...);
int main(){
    srand(time(0));
    double a = rand()%50 + 1;
    double b = rand()%50 + 1;
    double c = rand()%50 + 1;
    double d = rand()%50 + 1;
    printf("a = %.1lf;\nb = %.1lf;\nc = %.1lf;\nd = %.1lf;\n", a, b, c, d);
    printf("\nThe average of a and b = %.1lf\n", average(2, a, b));
    printf("\nThe average of a, b and c = %.2lf\n", average(3, a, b, c));
    printf("\nThe average of a, b, c and d = %.3lf\n", average(4, a, b, c, d));
    return 0;
}
double average(int count, ...){
    double total = 0;
    va_list list;
    va_start(list, count);
    for (int i = 1; i <= count; i++)
    total += va_arg(list, double);

    va_end(list);
    return total/count;
}