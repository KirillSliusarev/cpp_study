#include <iostream>
#include <windows.h>
#include <array>
using namespace std;

int main()
{
    int number;
    while (true)
    {
        cout << "Enter positive integer" << endl;
        cin >> number;
        if (number >= 0)
        {
            break;
        }
    }
    int sum = 0;
    for (int i = 1; i <= number; i++)
    {
        sum += i;
    }
    cout << endl << sum << endl;


    array <int, 10> arr{1,2,3,4,5,6,7,8,9,0};

    for(auto a : arr)
    {
        cout << a << " ";
    }
    cout << endl;

    sum = 0;
    for(auto a : arr)
    {
        if (a % 2 == 0)
        {
            cout << a << " ";
        }
        else
        {
            sum += a;
        }
    }
    cout << endl << sum;
}