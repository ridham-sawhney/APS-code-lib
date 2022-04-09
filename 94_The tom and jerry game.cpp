#include <iostream>

using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
         unsigned long long int ts,c=0,jsw;
         cin>>ts;
        while(ts%2==0)
           {
               ts=ts/2;
           }
       if(ts==1)
        {
            jsw=0;
        }
        else
        {
            jsw=ts/2;
        }
        cout<<jsw<<"\n";
    }
  return 0;
}
