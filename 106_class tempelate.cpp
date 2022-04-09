#include <iostream>
using namespace std;
template <typename T>

void display(T x)
{
    cout<<x<<endl;
}
int main() {
  display(10);
  display("a");
  display(2.5);
    return 0;
}
