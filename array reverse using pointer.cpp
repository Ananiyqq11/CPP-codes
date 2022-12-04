#include<iostream>
using namespace std;

int main()
{ int score[5];
  int *ptr=& score[4];
    cout <<"enter five integers\n";
    for(int i=0;i<5;i++)
    cin>>score[i];
    for(int i=0;i<5;i++)
    cout << " "<<score[i]<<" ";
    cout<<endl;
     cout<<"reversed array"<<endl;
    for(int i=0;i<5;i++)
    cout<<" "<<*(ptr--)<<" ";
    return 0;
}