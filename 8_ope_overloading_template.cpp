#include<iostream>
using namespace std;
class point
{
    double x;
    double y;
public:
    point(double x=0,double y=0):x(x),y(y){}
    point& operator+(point const &p)
    {
        point temp;
        temp.x=x+p.x;
        temp.y=y+p.y;
        return temp;
    }
    friend ostream& operator<<(ostream &o,point &p);
};
ostream& operator <<(ostream &o, point &p)
{
    o<<"X="<<p.x<<"Y="<<p.y<<endl;
    return o;
}
template<class T>
class Fig
{
    T *arr;
    int size;
public:
    Fig(T *arr,int size):arr(arr),size(size){}
    T& sum()
    {
        T temp=arr[0];
        for(int i=1;i<size;i++)
        {
            temp=temp+arr[i];
        }
        return temp;
    }
};

int main()
{
    int a[10]={3,6,7,8};
    Fig<int> FigInt(a,4);
    float b[10]={6.1f,5.6f,7.8f,10.4f,3.4f};
    Fig<float> Figfloat(b,5);
    point p[10]={point(3,4),point(5,6),point(8,6),point(7,10)};
    Fig<point> Figpoint(p,4);
    cout<<"Integer sum=";
    cout<<FigInt.sum()<<endl;
    cout<<"Float sum=";
    cout<<Figfloat.sum()<<endl;
    point p3=Figpoint.sum();
    cout<<"Point sum=";
    cout<<p3;
    return 0;
}
