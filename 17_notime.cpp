#include <iostream>
using namespace std;

int main() {
	int n,h,x,a,i=0;
	cin>>n>>h>>x;
	while(n!=0 && i==0)
	{
	    cin>>a;
	    if(a+x == h)
	    i++;
	    n--;
	}
	if(i>0)
	cout<<"yes";
	else
	cout<<"no";
	
	return 0;
}
