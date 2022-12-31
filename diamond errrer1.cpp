#include<iostream>
using namespace std;

int main()
{   int a,i,j;
    int m=a/2;
  cout<<"enter odd number"<<endl;
   cin>>a;
  for(int i=1;i<=a;i++)
 {
    for(int j=1;j<=a;j++)
    { 
    if(j<=m||j>a-m)
     cout<<" ";
     else
     cout<<"*";
    }
     cout<<endl;
    if(i<m)
      m--;
    else
      m++;
  }
  
    return 0;
}