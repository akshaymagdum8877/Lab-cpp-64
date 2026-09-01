#include <iostream>
class rectangle 
{
    private:
    double length;
    double width;

    public:
    rectangle():length(1.0),width(1.0){}

    rectangle(double len,double wid):length(len),width(wid){}

    ~rectangle()
    {
        std::cout<<"rectangle object destroyed."<<std::endl;
    }
    double getlength()const{
        return length;
    }
    double getwidth()const{
        return width;
    }
    void setlength(double len){
        length=len;
    }
    void setwidth(double wid){
        width=wid;
    }
    double calculatearea()const{
        return length*width;
    }
    double calculateperimeter()const{
        return 2*(length+width);
    }
};
int main()
{
    rectangle rect(4.0,40.0);

    std::cout<<"rectangle properties:"<<std::endl;
    std::cout<<"length:"<<rect.getlength()<<std::endl;
    std::cout<<"width:"<<rect.getwidth()<<std::endl;
    std::cout<<"area:"<<rect.calculatearea()<<std::endl;
    std::cout<<"perimeter:"<<rect.calculateperimeter()<<std::endl;
    return 0;
}