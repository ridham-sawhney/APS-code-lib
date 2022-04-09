#include<bits/stdc++.h>
using namespace std;
int a[100][100];
int N,K,M;        //GIVEN INPUT


int getmax(int t,int q,int Z,int Y)    //to find the max element IN subarray
{

    int max=0;


    for(int i=t;i<Z;i++)
    {
       for(int j=q;j<Y;j++)
       {
           if (max<a[i][j])
          {
              max=a[i][j];
          }

       }

    }
return max;

}

int main()
{

cin>>N>>K>>M;

for(int i=0;i<N;i++)        //INPUT ARRAY
    for(int j=0;j<N;j++)
{

    cin>>a[i][j];
}






int i,j;

vector<int>p;   //vector to store max elements in subarray

for(int i=0;i<N;i++)
{
    for(int j=0;j<N;j++)
    {
         if((j+K)<=N &&(i+K)<=N)       //condition to check sub array size lie in between array size
        {


        int x =getmax(i,j,i+K,j+K);    //calling get max from subarray
         p.push_back(x);
         }
    }


}
vector<int>u;   // vector to store elements greater than K(INPUT)

cout<<"\n\nP array=";
for(int i=0;i<p.size();i++)
   {
     cout<<p[i]<<" ";
     if(p[i]>=M)
     {
        u.push_back(p[i]);

     }



   }
cout<<"\n\nOUTPUT:";
cout<<endl<<u.size()<<" "<<*min_element(u.begin(), u.end())<<" "<<*max_element(u.begin(), u.end());
//printing count of elements greater than given value , min element, max elemet





return 0;


}
