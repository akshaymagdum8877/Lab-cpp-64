#include <iostream>
#include <cmath>
const double pi=3.14159;
class shape
{
    public:
    virtual double calculatearea() const=0;
    virtual double calculateperimeter() const=0;
};
class circle:public shape
{
    private:
    double radius;

    public:
    circle(double rad):radius(rad){}
    double calculatearea() const override
    {
        return pi*pow(radius,2);
    }

    double calculateperimeter() const override
    {
        return 2*pi*radius;
    }
};

class rectangle:public shape
{
    private:
    double length;
    double width;

    public:
    rectangle(double len,double wid): length(len),width(wid){}
    double calculatearea() const override
    {
        return length*width;
    }
    double calculateperimeter() const override
    {
        return 2*(length*width);
    }
};

class triangle:public shape
{
    private:
    double side1;
    double side2;
    double side3;

    public:
    triangle(double s1,double s2,double s3):side1(s1),side2(s2),side3(s3){}
    double calculatearea() const override
    {
        double s=(side1+side2+side3)/2;
        return sqrt(s*(s-side1)*(s-side2)*(s-side3));
    }
    double calculateperimeter() const override
    {
        return side1+side2+side3;
    }
};
int main()
{
    circle Circle(7.0);
    rectangle Rectangle(42,8.0);
    triangle Triangle(4.0, 4.0, 3.2);
        std::cout << "Circle: " << std::endl;
 std::cout << "Area: " << Circle.calculatearea() << std::endl;
 std::cout << "Perimeter: " << Circle.calculateperimeter() << std::endl; 
 std::cout << "\nrectangle: " << std::endl;
 std::cout << "Area: " << Rectangle.calculatearea() << std::endl; 
 std::cout << "Perimeter: " << Rectangle.calculateperimeter() << std::endl;
 std::cout << "\ntriangle: " << std::endl;
 std::cout << "Area: " << Triangle.calculatearea() << std::endl; 
 std::cout << "Perimeter: " << Triangle.calculateperimeter() << std::endl; 
 return 0; 
}
    
