#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <thread>
using std::thread;
void function1()
{
    for( int i = 0; i < 200; i++ )
    cout << '+' << ' ';
}
void function2()
{
    for (int i = 0; i < 200; i++)
        cout << '-' << ' ';
}

int main()
{
    thread worker1(function1);
    cin.get();
    return 0;
}