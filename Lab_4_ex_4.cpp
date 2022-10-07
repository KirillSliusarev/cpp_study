#include "Lab_4_ex_4.h"

int MyMath::count = 0;
int main() 
{  
    weapon pistol("pistol", 4, 2);
    weapon machinegun("machinegun", 18, 8);

    cout << pistol.get_name()<< " " << pistol.get_dmg() << " " << pistol.get_weight() << endl;

    pistol.set_dmg(35);
    cout << pistol.get_dmg() << endl;

    cout << pistol.MaxWeight() << " " << machinegun.SummaryWeight(pistol) << " " << pistol.SummaryWeight(3) << endl;

    Charasteristics person(10);
    cout << person.GetDamage(pistol) << endl;

    double a = 3;
    double b = 4;

    

    cout << MyMath::Add(a,b) << " " << MyMath::Sub(a,b) << " " << MyMath::Mult(a,b) << " " << MyMath::Div(a, b) << endl;
 }