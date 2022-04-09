#include <iostream>
using namespace std;


class student_admission
{

    string name;
    int roll_no;
    string branch;

public:
    void get_info(string n,int r,string b)
    {

            name = n;
            roll_no = r;
            branch = b;

    }

    void showdata()
    {
        if(roll_no<5)
        cout<<"\nname ="<<name<<" \n roll no ="<<roll_no<<"\n branch="<<branch;
    }
    void checkpromo()
    {
        if(roll_no==1)
            cout<<"eligible for promotion";
        else
            cout<<"not eligible for promotion";
    }



};
int main() {
    student_admission s,s1;
    string n;
    int r;
    string b;
    cin>>n>>r>>b;
    s.get_info(n,r,b);
    //s.showdata();
    cin>>n>>r>>b;
    s1.get_info(n,r,b);
    s.showdata();
    s1.showdata();
  //  s.checkpromo();
    return 0;

}
