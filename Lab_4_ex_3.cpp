#include "Lab _ 4_ex_3.h"
int main() 
{  
    weapon pistol("pistol", 4, 2);
    weapon machinegun("machinegun", 18, 8);

    cout << pistol.name << " " << pistol.dmg << " " << pistol.weight << endl;

    weapon *ptr = new weapon("assault rifle", 8, 6);
    cout << ptr->name << " " << ptr->dmg << " " << ptr->weight << endl;
    delete ptr;

    cout << pistol.MaxWeight() << " " << machinegun.SummaryWeight(pistol) << " " << pistol.SummaryWeight(3) << endl;
}