#include <iostream>
using namespace std;
class Bankaccount
{
public:
    int accno;
    float accbalance;
    string name;
    long mobile[2];
    Bankaccount()
    {
        accno=0;
        accbalance=0;
        name="";
        mobile[0]=0;
        mobile[1]=0;
        cout<<"\n base class constructor Bankaccount()";

    }
    Bankaccount(int n,float m,string n1):accno(n),accbalance(m),name(n1)
    {
        mobile[0]=12345;
        mobile[1]=78910;
        cout<<"\nbase class constructor bankacount(int,float,string)";

    }
    ~Bankaccount()
    {
        cout<<"\n Base class destructor invoked";
    }
    void printaccountdetails()
    {
        cout<<"Account no="<<accno<<" balance="<<accbalance<<" name="<<name<<" mobile 1"<<mobile[0]<<" mobile 2"<<mobile[1]<<"\n";
    }
    void debit(float amount)
    {
        cout<<"\nbase class method debit(float amount)";
        accbalance=accbalance-amount;
        cout<<"\nAmount Rs"<<amount<<" has been debited from accbalance\n total balance="<<accbalance;
    }
    void credit(float amount)
    {
        cout<<"\nbase class method credit(float amount)";
        accbalance=accbalance+amount;
        cout<<"\nAmount Rs"<<amount<<" has been credited to accbalance\n total balance="<<accbalance;
    }
};

class savingaccount:public Bankaccount //derived class
{
public:
    int numberoftransactions;
    static int minimumbalance,transactionlimit;
    savingaccount():Bankaccount()
    {
        cout<<"\nderived class constructor saving account()";
    }
    savingaccount(int n,float m,string n1):Bankaccount(n,m,n1)
    {
        cout<<"\n derived class constructor saving account(int n,float m,string n1) invoked";
    }

    ~savingaccount()
    {
        cout<<"\nderived class destructor invoked";
    }

    bool verifyMinimumbalance()
    {
        return accbalance>minimumbalance ? true:false;
    }
};


int savingaccount::minimumbalance=500;
int savingaccount::transactionlimit=0;

int main() {
    savingaccount s1;
    savingaccount s2(2,100000.0f,"ramesh");
    savingaccount a1,a2;
    a1.accbalance=1000;
    a2.accbalance=500;
    int amount =100;
    if( a1.verifyMinimumbalance())
    {
        cout<<"\n a1 has minimum balance";

        if(a1.accbalance-amount>0)
        {
            a1.debit(amount);
            cout<<"\namount "<<amount<<" is debited from account a1";
        }
        cout<<"\ncrediting to a2 account";
        a2.credit(amount);
        cout<<"\n balance after credit operation ="<<a2.accbalance;
    }

    return 0;
}
