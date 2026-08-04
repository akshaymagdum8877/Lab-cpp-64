#include<iostream>
#include<string>
using namespace std;
class student{
    public:
    string name;
    int rollno;
    float marks;

    public:
    
    void inputdetails()
    {
        cout<<"enter student name:";
        getline(cin>>ws,name);
        cout<<"enter roll number:";
        cin>>rollno;
        cout<<"enter marks:";
        cin>>marks;

    }
    void displaydetails()
    const{
        cout<<"\n----student details----\n";
        cout<<"name:"<<name<<endl;
        cout<<"roll no.:"<<rollno<<endl;
        cout<<"marks:"<<marks<<endl;
    }
};
int main()
{
    student s;
    s.inputdetails();
    s.rollno=100;
    s.displaydetails();
    return 0;

}