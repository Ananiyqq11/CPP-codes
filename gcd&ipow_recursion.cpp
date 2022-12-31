#include<iostream>
using namespace std;

int gcd(int n,int m){
  if(n%m==0)
  return m;
  else if(n<m)
  return gcd(m,n);
  else
  return gcd(n-m,m);
}
int ipow(int b,int e){
  if(e==0)
   return 1;
  else if(e%2==0)
 return ipow(b,e/2)*ipow(b,e/2);
  else
 return ipow(b,e/2)*ipow(b,e/2)*b;
}

int main()
{ int a,c,b,e;
    cout << "Hello,World!\n";
cout<<"enter two numbers to get GCD : ";
 cin>>a>>c;

 cout<<"GCD :"<<gcd(a,c);
 cout<<"\nenter base and exponent to get POWER : ";
 cin>>b>>e;
 cout<<"POWER :"<<ipow(b,e);
    
    
    return 0;
}