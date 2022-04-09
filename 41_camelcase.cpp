#include <bits/stdc++.h>

using namespace std;

// Complete the camelcase function below.
int camelcase(string s) {
  int con=1;
    for(int i=1;i<s.size();i++)
    {  
        if((int)s[i]>=65&&(int)s[i]<=90)
        {
            con++;
        }
    }

return con;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    int result = camelcase(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
