#include<iostream>
using namespace std;

long factorial(int n)
{       long fact=1;
  for(int i=1;i<=n;i++)
    fact=fact*i;
  return fact;
}
int main()
{ int n;
    cout << "enter number"<<endl;
    cin>>n;
   cout<<factorial(n);


   return 0;
}


