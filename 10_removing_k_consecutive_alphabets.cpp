
#include <bits/stdc++.h>
#include <iostream>
using namespace std;



class Solution {
public:
	string remove_k_char(int k, string s)
	{


		if (k == 1)
			return "";

		string output = "";
		stack<pair<char, int> > stk;


		for (int i = 0; i < s.length(); i++) {


			if (stk.empty() == true) {
				stk.push(make_pair(s[i], 1));
			}
			else {


				if (s[i] == (stk.top()).first) {
					stk.push(
						{ s[i], stk.top().second + 1 });
					if (stk.top().second == k) {
						int x = k;
						while (x) {
							stk.pop();
							x--;
						}
					}
				}
				else {


					stk.push(make_pair(s[i], 1));
				}
			}
		}


		while (!stk.empty()) {
			output += stk.top().first;
			stk.pop();
		}
		reverse(output.begin(), output.end());
		return output;
	}
};


int main()
{
    int n,k ;
    cin>>n>>k;
	string s;

	cin>>s;
	if(s.length()==n)
    {


	Solution obj;
	cout << obj.remove_k_char(k, s) << "\n";
    }
	return 0;
}



