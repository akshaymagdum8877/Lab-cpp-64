#include<iostream>
using namespace std;
class complex 
{
    private:int real,imag;
public:complex(int r=0,int i=0):real(r),imag(i){}
complex add(const complex &c){
    return complex(real+c.real,imag+c.imag);
}
complex subtract(const complex &c){
     return complex(real-c.real,imag-c.imag);
}
void display()const{
    cout<<real<<"+i"<<imag<<endl;
}
};
int main()
{
    complex c1(4,5),c2(8,9);
    complex sum=c1.add(c2);
    complex diff=c1.subtract(c2);

    cout<<"first complex number:";c1.display();
    cout<<"second complex number:";c2.display();
    cout<<"addition:";sum.display();
    cout<<"subtraction:";diff.display();
return 0;
}