#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int num,rem,temp,dec,i=0;
    cout<<"enter any Binary number"<<" ";
    cin>>num;
    temp=num;
    while(temp>0)
    {
      rem=temp%10;
      dec=dec+rem*pow(2,i);
      i++;
      temp=temp/10;
      
    }
     cout<<"Decimal is"<<" "<<dec;
    return 0;
}