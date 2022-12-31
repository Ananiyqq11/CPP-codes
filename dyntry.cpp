#include<iostream>
#include<string>
using namespace std;

int main()
{ int*d,y,n;char*f;
    cout << "Hello,World!\n";
    cout<<"enter dynamic array size\n";
    cin>>y;
    cout<<"enter dynamic string size\n";
    cin>>n;
    d=new(nothrow)int[y];
    f=new(nothrow)char[n];
    if(!d && !f){
    cout<<"memory allocation failed\n";}
    else{
     cout<<"memory allocation succeded\n";
  for(int i=0;i<y;i++){
   cin>>d[i];
    }
  cout<<"you entered\n";
  for(int i=0;i<y;i++){
   cout<<d[i]<<" "<<endl;
    }
    cout<<"enter string elements\n";
    for(int i=0;i<n;i++){
    cin>>f[i];  
    }
    cout<<"you entered\n";
      for(int i=0;i<n;i++){
    cout<<f[i] ;
    }}
    
    
    
    
    
    return 0;
}