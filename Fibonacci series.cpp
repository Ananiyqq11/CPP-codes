#include<iostream>
using namespace std;

int main()
{ int Fibonacci[100];
      Fibonacci[0]=0;
      Fibonacci[1]=1;
       int n;
    cout<<"enter number"<<endl;
    cin>>n;
  cout<<Fibonacci[0]<<" ";
  cout<<Fibonacci[1];
    for(int i=2;i<=n;i++){
Fibonacci[i]=Fibonacci[i-1]+Fibonacci[i-2];
cout <<" "<<Fibonacci[i];}
    return 0;
}