#include<bits/stdc++.h>
using namespace std;

void subarr(vector<int> v,int start,int end)
{
    if(end==v.size())
    return ;

    else if(start>end)
    subarr(v,0,end+1);

    else{
        for(int i=start;i<=end;i++)
        {
            cout<<v[i]<<" ";
        }
        cout<<endl;
        subarr(v,start+1,end);
    }
    return;
}

int main()
{
   
    vector<int> v{1,2,3,4};
    // for(int i=1;i<5;i++)
    // v.push_back(i);

    subarr(v,0,0);


    return 0;
}





// 1 2 3 4 

// ist start=0
// end=0
// output :1

// 2nd start=1
// end=0

// start=0;
// end=1
// output :1 2

// 3rd;
// start=1,
// end=1

// output: 2

// 4th
// start=2
// end=1

// start=0
// end=2

// output: 1 2 3

// 5th
// start=1
// end=2

// output: 2 3

// 6th
// start=2 end=2
// output=3


// 7th
// start=3 end 2
// start=0,end=3
 
//  1 2 3 4
// 2 3 4 
// 3 4 
// 4