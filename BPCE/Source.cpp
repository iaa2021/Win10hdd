#include <iostream>
#include <iomanip>
#include <conio.h>
using namespace std;
#include "ComissionEmployee.h"
#include "BPCE.h"
int main()
{
    ComissionEmployee ce("Sue", "Jones", "222-22-2222", 10000, 0.6);
    BPCE employee("Bob", "Lewis", "333-33-3333", 5000, 0.4, 300);
    cout << fixed << setprecision(2);
    ComissionEmployee* CEptr = 0;
    BPCE* BPCEptr = &employee;
    CEptr = &ce;
    cout << "Invoking print function by Ceptr:\n";
    CEptr->print();
    cout << "\nInvoking print function by BPCEptr:\n";
    BPCEptr->print();
    cout << "\nInvoking print function by CEptr directed to the BPCE object:\n";
    CEptr = &employee;
    CEptr->print();
    cin.get();
    return 0;
}