#include <bits/stdc++.h>

using namespace std;

// Complete the marsExploration function below.
int marsExploration(string s) 
{
 int con=0,k,i=0,m=1,l=2;
string h="SOS";


k=s.length();

while(i<k-2)
{
 if(h[0]!=s[i])
 {
     con++;
 }
 i=i+3;

}

while(m<k-1)
{
 if(h[1]!=s[m])
 {
     con++;
 }
 m=m+3;

}
while(l<k)
{
 if(h[2]!=s[l])
 {
     con++;
 }
 l=l+3;

}

cout<<con;

return con;
}






int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    int result = marsExploration(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
