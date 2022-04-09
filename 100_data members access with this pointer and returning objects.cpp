#include<iostream>
using namespace std;

class bankaccount
{
public:
    int accno;
    float accbal;
    bankaccount()
    {
        this->accno=0;
        this->accbal=0;
    }
    bankaccount(int accno,float accbal)
    {
        this->accno=accno;
        this->accbal=accbal;
    }
    void printaccount()
    {
        cout<<this->accno<<":"<<this->accbal<<endl;
    }
    void printaddress()
    {
        cout<<this<<endl;
    }
    //this to return object
    bankaccount & getaccount()
    {
        this->accno=1002;
        this->accbal=2000;
        return *this;
    }
    bankaccount & createaccount()
    {
        bankaccount *ba=new bankaccount(1003,3000);
        return *ba;
    }
};

int main()
{
    bankaccount ba1,ba2,ba3;
    ba1.printaddress();
    ba2.printaddress();
    ba3.printaddress();
    bankaccount ba5(1001,1000);
    //create object using this pointer
    bankaccount ba4=ba5.getaccount();
    ba4.printaddress();
    ba4.printaccount();

    bankaccount ba6=ba5.createaccount();
    ba6.printaccount();
    return 0;
}

