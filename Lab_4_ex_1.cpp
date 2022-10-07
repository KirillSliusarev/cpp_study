#include <iostream> 
using namespace std; 

class weapon
{
    public:
        string name;
        int dmg;
        int weight;
    weapon(string name, int dmg, int weight)
    {
        this->name = name;
        this->dmg = dmg;
        this ->weight = weight;
    }

    weapon() : weapon("machinegun", 18, 32) {}
};

int main() 
{  
    weapon pistol("pistol", 4, 2);
    weapon machinegun;

    cout << pistol.name << " " << pistol.dmg << " " << pistol.weight << endl;
    cout << machinegun.name << " " << machinegun.dmg << " " << machinegun.weight << endl;
}