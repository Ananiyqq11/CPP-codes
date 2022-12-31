#include<iostream>
using namespace std;

int main()
{
   int n,i;
   cout<<"enter number of terms"<<endl;
   cin>>n;
   int x=0,y=1,z;
   for(i=0;i<n;i++)
    {
      if(i==0)
    {
       cout<<x<<" "<<y<<" ";
    }
      else
       { 
         z=x+y;
         x=y;
         y=z;
        cout<<z<<" ";
       }
    }
   
    return 0;
}