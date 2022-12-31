#include<iostream> 
   using namespace std; 
  int main() 
 { 
    //1D dynamic array allocation
    int*array,s;
    double*dub,d;
    cout<<"enter dynamic array size\n";
    cin>>s;
    cout<<"enter dynamic double\n";
    cin>>d;
    array=new(nothrow)int[s];
    dub=new(nothrow) double(d);
    if(!dub)
    {
    cout<<"dynamic double allocation failed\n";
    }
    else
    {
    cout<<"dynamic double allocated successfully\n";
    cout<<*dub<<endl;
    delete dub;
    cout<<"dynamic double successfully deallocated\n";
    }
    if(!array)
    {
    cout<<"dynamic array allocation failed\n";
    }
    else
    {
    cout<<"dynamic array allocation succeded\n";
    cout<<"enter array elements\n";
    for(int i=0;i<s;i++){
   cin>> array[i];
    }
        cout<<"you entered array elements\n";
    for(int i=0;i<s;i++){
   cout<<array[i]<<endl;
    }
    //1D dynamic array deallocation
    delete [] array;
    cout<<"dynamic array successfully deallocated \n";
    }
   
     return 0; 
 }



    
    
    