#include<iostream>
using namespace std;

int main()
{  char names[5][20];
cout<<"enter elements"<<endl;
  for(int i=0;i<5;i++)
  cin.getline(names[i],20);
  cout << "you entered"<<endl;
     for(int i=0;i<5;i++){
     cout<<names[i];
    cout<<endl;}
    return 0;
}