#include <iostream> //input output stream
using namespace std; // namespace standart
int main() // main func
{
    setlocale(LC_ALL, ""); // setting up lacale
    int a = 150;
    float b = 15.933;
    short int c = 250;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;
    short int day = 18;
    string month = " august ";
    short int year = 2003;
    cout << "\nМоя дата рождения: " << day << month << year << " года." << endl;

    const float first_const = 2.3;
    const string second_const = "WINDOWS";
    cout << first_const << " " << second_const;
}