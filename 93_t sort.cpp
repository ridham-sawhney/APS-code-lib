#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[1000000];
    for (int i = 0; i < n; ++i)
        cin>>arr[i];
        int n = sizeof(arr)/sizeof(arr[0]);

    sort(arr, arr+n);

    for (int i = 0; i < n; ++i)
        cout << arr[i] <<"\n";

    return 0;
}
