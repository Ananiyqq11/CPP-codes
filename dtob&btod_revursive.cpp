#include<iostream>
using namespace std;

int dtob(int n){
  if(n==0)
  return 0;
  else
 return n%2+dtob(n/2)*10;
}

int btod(int n){
  if(n==0)
  return 0;
  else
 return n%10+btod(n/10)*2;
}

int main()
{ int Dec,bin;
    cout<<"Hello,World!\n";
cout<<"enter decimal to convert into binary\n";
cin>>Dec;
   cout<<dtob(Dec);
cout<<"\nenter binary to convert into decimal\n";
 cin>>bin;
  cout<<btod(bin);



    return 0;
}