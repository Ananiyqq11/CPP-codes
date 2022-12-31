#include<iostream>
using namespace std;

int main()
{ int a[]={800,78,90,120};
  int large=a[0];
   for(int i=0;i<4;i++){
  if(a[i]>large)
   large=a[i];}
    cout << large;
    return 0;
}