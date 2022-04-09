#include <iostream>
using namespace std;
template<typename T,typename T1>

class A
{
public:
    T x;
    T1 y;

    A(T a,T1 b)
    {
        x=a;
        y=b;
    }
    void print()
    {
        cout<<"\n X="<<x<<" Y="<<y<<endl;
    }
};
int main() {
    A<int ,float> a1(6,6.1);
    a1.print();
    A<string,float> a2("mydata",6.1);
    a2.print();

    return 0;
}
