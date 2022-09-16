#include <iostream>
#include <WIndows.h>
using namespace std; 
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int x;
    int y;
    cout << "Enter first integer: ";
    cin >> x;
    cout << endl << "Enter second integer: ";
    cin >> y;
    cout << endl << "Average is " << (x + y)/2 << endl;
    char operation;
    cout << "Enter operation sign (+, -, * or /):  ";
    cin >> operation;
/*
    if( operation == '+')
    {
        cout << endl << "x + y = " << x+y << endl;
    }
    else if (operation == '-')
    {
        cout << endl << "x - y = " << x-y << endl;
    }
    else if (operation == '*')
    {
        cout << endl << "x * y = " << x*y << endl;
    }
    else if (operation == '/')
    {
        cout << endl << "x / y = " << x/y << endl;
    }
*/

    switch (operation)
    {
        case '+': cout << endl << "x + y = " << x+y << endl; 
            break;
        case '-': cout << endl << "x - y = " << x-y << endl; 
            break;
        case '*': cout << endl << "x * y = " << x*y << endl; 
            break;
        case '/': cout << endl << "x / y = " << x/y << endl; 
            break;
        default: cout << endl << "Wrong sign" << endl;
        
    }


}