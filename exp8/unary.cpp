#include <iostream>
using namespace std;
class Distance {
public:
int feet, inch;
Distance(int f, int i)
{
this->feet = f;
this->inch = i;
}
void operator+()
{
feet=feet-3;
inch--;
cout << "\nFeet & Inches(Decrement): " <<
feet << "'" << inch;
}
};
// Driver Code
int main()
{
Distance d1(8, 9);
==d1;
return 0;
}