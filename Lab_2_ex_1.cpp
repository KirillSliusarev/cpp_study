#include <iostream> //input output stream
using namespace std; // namespace standart
int main() // main func
{
    setlocale(LC_ALL, ""); // setting up lacale
    int a = 150;
    int b = 15;
    int c = 250;
    cout << a + b - c * b / a << endl;
    cout << "a % b = " << (a % b) << endl;
    cout << (((145 - 100 / 20) / 20) * 50) + 45 << endl;

    int x = 3;
    int y = 7;
    int i = x & y;
    int ili = x | y;
    int ampersant = x ^ y;
    int minus = x - y;
    int tilda = ~ x;
    int dblfrwrd = x >> 1;
    int dblbckwrd = x << 1;
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
    cout << "i = " << i << endl;
    cout << "ili = " << ili << endl;
    cout << "ampersant = " << ampersant << endl;
    cout << "minus = " << minus << endl;
    cout << "tilda = " << tilda << endl;
    cout << "dblfrwrd = " << dblfrwrd << endl;
    cout << "dblbckwrd = " << dblbckwrd << endl;

    bool tr = true;
    bool fl = false;
    bool smth = tr && (tr && (tr && tr || fl) && (fl || tr != fl));
    cout << smth << endl;
    cout << (25 < 48 && (23 > (3+15) || (2 < 8 && (5 >= 2 && 15 < 15)))) << endl;
}