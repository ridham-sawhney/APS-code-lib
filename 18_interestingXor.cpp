#include <iostream>
#include<cmath>
using namespace std;

int main() {
    long long int T,C;
	cin>>T;
	while(T-- )
	{
	cin>>C;
    if(C==1)
    {
        cout<<"0\n";
    }
    else
    {


	int d=1;

	while(C>=pow(2,d))
	{
	    d++;
	}
	long long int A=pow(2,d-1)-1;
	long long int B=A^C;
	cout<<A*B<<"\n";
    }
	}
	return 0;
}
