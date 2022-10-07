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

    ~weapon()
    {
        cout << this->name << " " << this->dmg << " " << this->weight << endl << this->name << " deleted" << endl;
    }

    bool MaxWeight()
    {
        if(this->weight > 32)
        {
            return true;
        }
        else return false;

    }

    int SummaryWeight(int second)
    {
        return this->weight + second;
    }

    int SummaryWeight(weapon second)
    {
       return SummaryWeight(second.weight);
    }


};