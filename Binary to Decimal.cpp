#include<iostream>
#include<math.h>
using namespace std;

int main()
{ int n,r,t,i=0,d=0;
   cout<<"enter binary number"<<endl;
    cin>>n;
    t=n;
    while(t>0)
   {
    r=t%10;
    d=d+r*pow(2,i);
    i++;
    t=t/10;
   }
    cout<<"the number in decimal is"<<" "<<d;
    return 0;
}