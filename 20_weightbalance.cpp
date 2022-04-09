#include <iostream>
using namespace std;

int main() {
	long long int T,w1,w2,x1,x2,m;
    cin>>T;
	while(T--)
	{
	    cin>>w1>>w2>>x1>>x2>>m;
        int t=0;
	    if(x1>x2 &&t==0)
	    {
	     cout<<"0\n";
         t++;

	    }

	    if((w2-w1)<(x1*m)&&t==0)
	    {
	      cout<<"0\n";
          t++;

	    }
	    if((w2-w1)>(x2*m)&&t==0)
	    {
	      cout<<"0\n";
          t++;

	    }

	    if((w2-w1)<=(x2*m) &&(w2-w1)>=(x1*m)&&t==0)
	   {
	    cout<<"1\n";
	    t++;
	   }
	    if((w2-w1)>=(x2*m) &&(w2-w1)<=(x1*m)&&t==0)
        {
        cout<<"0\n";
        }


	}
	return 0;
}
