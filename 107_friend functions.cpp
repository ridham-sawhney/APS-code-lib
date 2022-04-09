#include <iostream>
using namespace std;
class beta;
class alpha
{
private:
int data;

public:
    alpha()
    {
        data=10;
    }

    friend int F(alpha,beta);
};

class beta
{
private:
    int data;

public:
    beta()
    {
        data=100;
    }

    friend int F(alpha,beta);
};
int F(alpha a,beta b)
{
    return a.data+b.data;
}
int main() {
    alpha aa;
    beta bb;
    cout<<"\ndata friend="<<F(aa,bb);
    return 0;
}
