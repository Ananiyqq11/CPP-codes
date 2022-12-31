#include<iostream>
using namespace std;

int main()
{  int csum=0;
  char mess[]="true";
  for(int i=0;i<=3;i++)
    csum+=mess[i];
    cout<<csum;
    return 0;
}