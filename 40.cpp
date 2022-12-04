#include<iostream>
using namespace std;
struct st{
  int no,phone;
  string name;
 };

int main()
{ st p1,p2,p3;
  st a[5];
  p1.no=1;
  p1.name="ABC";
  p1.phone=9986;
  p2.no=2;
  p2.name="EFG";
  p2.phone=536;
  p3.no=3;
  p3.name="HIJ";
  p3.phone=257;
 



;
  cout<<"Member 1"<<"      Member 2"<<"     Member 3 "<<endl;;
    cout<<p1.no<<"              "<<p2.no<<"              "<<p3.no<<endl;
    cout<<p1.name<<"           "<<p2.name<<"            "<<p3.name<<endl;
    cout<<p1.phone<<"          "<<p2.phone<<"            "<<p3.phone<<endl;
    
    for(int i=0;i<5;i++)
    {cout<<"enter phone"<<endl;
   getline(cin,a[i].phone);
    cout<<"enter no"<<endl;
    getline(cin,a[i].no);
    cout<<"enter name"<<endl;
    getline(cin,a[i].name);
    }
    
    
        for(int i=0;i<5;i++)
    {
    cout<<"the phone you entered"<<endl;
    cout<<a[i].phone;
    cout<<"the no you entered"<<endl;
    cout<<a[i].no;
    cout<<"the name you entered"<<endl;
    cout<<a[i].name;
    }
    
    
    
    
    return 0;
}