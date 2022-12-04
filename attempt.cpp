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
    char temp[5][20];
  for(int i=0;i<5;++i){
  for(int j=i+1;j<5;++j){
    if(names[i][i]>names[i][j]){
    temp[5][20]=names[i][i];
    names[i][i]=names[i][j];
    names[i][j]=temp[5][20];
    }
    } }
     cout<< " in order "<<endl;
     for(int i=0;i<5;i++){
       cout<<names[i][i];
       cout<<endl;}
      return 0;
  }
    