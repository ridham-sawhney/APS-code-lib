#include <iostream>
#include<new>
using namespace std;

int main() {

    try {
        int* myarray=new int[1000000000000000000000000000];
        cout<<"\n hello kle tech!\n";
    }

    catch(bad_alloc& ba)
    {
        cerr<<"bad_alloc caught: "<<ba.what()<<"\n";
    }
    return 0;
}
// try in codeblocks