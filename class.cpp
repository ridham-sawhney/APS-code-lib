#include<bits/stdc++.h>
using namespace std;

class instrument{
public:
string name;
instrument(string s)
{
    name=s;
}
instrument(){}
void display()
{
    cout<<"\n"<<name<<"\n ";
}
virtual void play ()
{
    cout<<"\ninstrument playing......\n";
}

};

class piano:public instrument{
    public:
    piano(string n){
        name=n;
    }
    void play(){
        cout<<"\npiano playing...\n";
    }
};

class guitar:public instrument{
    public:
    guitar(string n){
        name=n;
    }
    void play(){
        cout<<"\nguitar playing...\n";
    }
};

int main()
{
    
    instrument i1("instrument 1");
    i1.display();
    i1.play();
    piano p1("piano 1");
    p1.play();
    instrument *i=&p1;
    i->play();
    guitar g1("hello");
    instrument *ii=&g1;
    ii->play();
    i1.play();

}