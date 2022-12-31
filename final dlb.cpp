#include<iostream>
using namespace std;
struct st{
  int no,phone;
  string name;
 }q[3];

int main()
{ q[3];
  q[0].no=9; q[1].no=8;q[2].no=7;
  q[0].phone=1986;q[1].phone=1977;q[2].phone=1973;
  q[0].name="true";q[1].name="false";q[2].name="true or false";
st p1,p2,p3;
  p1.no=1; p1.name="ABC";p1.phone=9986;
  p2.no=2;p2.name="EFG";p2.phone=536;
  p3.no=3;p3.name="HIJ"; p3.phone=257;
 
  cout<<"Member 1"<<"      Member 2"<<"     Member 3 "<<endl;;
    cout<<p1.no<<"              "<<p2.no<<"              "<<p3.no<<endl;
    cout<<p1.name<<"           "<<p2.name<<"            "<<p3.name<<endl;
    cout<<p1.phone<<"          "<<p2.phone<<"            "<<p3.phone<<endl;
    cout<<"By loop"<<endl;
    for(int i=0;i<3;i++)
    {
    //cout<<q[i].name<<"     ";
    cout<<q[i].no<<"      "<<endl;
    cout<<q[i].phone<<"     "<<endl;
    cout<<q[i].name<<"      "<<endl;
    cout<<endl;
    }
    return 0;
}