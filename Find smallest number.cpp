#include<iostream>
using namespace std;

int main()
{ int a[]={800,7890,90,120};
  int small=a[0];
   for(int i=0;i<4;i++){
  if(a[i]<small)
   small=a[i];}
    cout << small;
    return 0;
}