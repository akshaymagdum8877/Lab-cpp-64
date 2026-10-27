#include<iostream>
using namespace std;
class vehicle
{
    protected:
    vehicle()
    {
        cout<<"this is a vehicle\n";
    }
    
};

class car : protected vehicle{
    public:
    car()
    {
        cout<<"this vehicle ia car\n";
    }
};

class bus: protected vehicle{
    public:
    bus()
    {
        cout<<"this vehicle is bus\n";
    }
};

int main()
{
    car obj1;
    bus obj2;
    return 0;
    
}