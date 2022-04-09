#include <iostream>
using  namespace  std;
class alpha
{
    int data1;
    void show()
    {
        cout<<"\n friend class "<<data1<<endl;
    }

    public:
    alpha()
    {
        data1=10;
    }
    friend class beta;

};


class beta
{
public:
    void printdata()
    {
        alpha a;
        a.show();
    }

    void printdata(alpha a)
    {
        a.data1=20;
        a.show();
    }
};


int main() {
beta b;
b.printdata();
alpha a;
b.printdata(a);

    return 0;
}
