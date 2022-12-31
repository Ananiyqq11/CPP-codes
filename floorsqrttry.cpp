#include<iostream>
using namespace std;
 int floorsqrt(int x)
 {
   if(x==0||x==1)
   return x;
   int i=1, result=1;
  while(result<=x)
    {
      i++;
     result=i*i;
    }
  return i-1;
 }

int main()
{ int a;
    cout << "Hello,World!\n";
 cout<<"enter integer to get floor square root\n";
  cin>>a;
  cout<<"square root of "<<a<<" : "<<floorsqrt(a)<<endl;

    return 0;
}