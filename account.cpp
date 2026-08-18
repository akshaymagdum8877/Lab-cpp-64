#include<iostream>
using namespace std;
class savingaccount {
    private:
    string accountholdername;
    int accountnumber;
    double balance;
    double interestrate;

    public:
     savingaccount(string name,int accnumber,double initialbalance,double rate)
     {
        accountholdername=name;
        accountnumber=accnumber;
        balance=initialbalance;
        interestrate=rate;

     }
     void deposit(double amount)
     {
        if(amount>0){
            balance+=amount;
            cout<<"deposited:$"<<amount<<endl;

        }
     }
     
     void withdraw(double amount)
     {
if(amount>0&&amount<=balance)
{
    balance=amount;
    cout<<"withdraw:$"<<amount<<endl;

}else{
    cout<<"insufficient balance"<<endl;

}
     }
     void applyinterest()
     {
        double interest=balance*interestrate/100;
        balance+=interest;
        cout<<"interest applied:$"<<interest<<endl;

     }
     void display()
     {
        cout<<"\n[saving account]"<<endl;
        cout<<"account holder:"<<accountholdername<<endl;
        cout<<"account number:"<<accountnumber<<endl;
        cout<<"balance:$"<<balance<<endl;
        cout<<"interest rate:"<<interestrate<<"%"<<endl;
     }
};
class checkingaccount{
    private:
    string accountholderaname;
    int accountnumber;
    double balance;
    double transactionfee;

    public:
    checkingaccount(string name,int accnumber,double initialbalance,double fee)
    {
        accountholderaname=name;
        accountnumber=accnumber;
        balance=initialbalance;
        transactionfee=fee;
    
    }
    void deposit(double amount)
    {
        if(amount>0){
            balance+=amount;
            cout<<"deposited:$"<<amount<<endl;

        }
    }
    void withdraw(double amount){
        double total=amount+transactionfee;
        if(total<=balance)
        {
            balance=total;
            cout<<"withdraw:$"<<amount<<"($"<<transactionfee<<"fee applied)"<<endl;
        } else {
        cout<<"insufficient balance for withdraw + fee!"<<endl;
    }
    }
    void display(){
    cout<<"\n[checking account]"<<endl;
        cout<<"account holder:"<<accountholderaname<<endl;
        cout<<"account number:"<<accountnumber<<endl;
        cout<<"balance:$"<<balance<<endl;
        cout<<"transaction fee:$"<<transactionfee<<endl;
    }
};

int main()
{
savingaccount saving("alice",1001,5000.0,3.0);
checkingaccount checking("bob",1002,300.0,20.0);

saving.display();
saving.deposit(1000);
saving.withdraw(2000);
saving.applyinterest();
saving.display();

checking.display();
checking.deposit(1500);
checking.withdraw(1000);
checking.display();
return 0;

}