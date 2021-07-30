// This is an independent project of an individual developer. Dear PVS-Studio, please check it.

// PVS-Studio Static Code Analyzer for C, C++ and C#: http://www.viva64.com

// 2dimArray.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    srand(time(0));
    int row, column, aSize;
    row = rand()%10 + 1;
    column = rand()%10 + 1;
    cout << "Rows: " << row << endl;
    cout << "Columns: " << column << endl;
    int** array = new int* [row];
    for (int i = 0; i < row; i++)
        array[ i ] = new int[column];
    aSize = row * column;
    cout << "Array size is: " << aSize << endl;
    for (int i = 0; i < row; i++)
        for (int j = 0; j < column; j++)
            array[i][j] = (i + 1) * (j + 1);
    cout << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
            cout << setw( 3 ) << array[i][j] << ", ";

            cout << endl;
    }
    double middle; int aSum = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
           aSum += array[i][j];

        cout << endl;
    }
    middle = static_cast<double>(aSum) / (aSize);
    cout << "The sum of this array is: " << aSum << "\n the average is: " << middle << endl;
    cin.get();
    return 0;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
