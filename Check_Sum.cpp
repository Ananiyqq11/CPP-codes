#include<iostream>
using namespace std;
int checksum (char mm[],int n)
  { int csum=0;
    for(int i=0;i<n;i++)
    {
     csum=csum+mm[i];
    }
 return csum;
  }

int main()
{ char mm[3];
  int n;
    cout << "enter message size\n";
    cin>>n;
    cout<<"enter message\n";
    cin>>mm;
    cout<<checksum(mm,n)<<endl;
    return 0;
}