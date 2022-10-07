#include <iostream> 
using namespace std; 

class weapon
{
    private:
        string name;
        int dmg;
        int weight;
    public:
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

        string get_name()
        {
            return this->name;
        }

        int get_dmg()
        {
            return this->dmg;
        }

        int get_weight()
        {
            return this->weight;
        }

        void set_name(string name)
        {
            this->name = name;
        }

        void set_dmg(int dmg)
        {
            this->dmg = dmg;
        }

        void set_weight(int weight)
        {
            this->weight = weight;
        }

    friend class Charasteristics;
};

class Charasteristics
{
    private:
        int strenght;

    public:
        int get_strenght()
        {
            return this->strenght;
        }
        void set_strenght(int strenght)
        {
            this->strenght = strenght;
        }

        Charasteristics(int strenght)
        {
            this->strenght = strenght;
        }

        int GetDamage(weapon smth)
        {
            return this->strenght + smth.dmg;
        }



};

class MyMath
{
    public:
        static int count;

        static double Add(double first, double second)
        {
            count >= 0 ? count++ : count = 0;            
            return first + second;
        }

        static double Sub(double first, double second)
        {
            count >= 0 ? count++ : count = 0;       
            return first - second;
        }

        static double Mult(double first, double second)
        {
            count >= 0 ? count++ : count = 0;       
            return first * second;
        }

        static double Div(double first, double second)
        {
            count >= 0 ? count++ : count = 0;       
            return first / second;
        }
    
};