#include<iostream> 
   using namespace std; 
  int main() 
 { 
    //1D dynamic array allocation
    int*array;
    double*dub;
    array=new(nothrow)int[5];
    dub=new(nothrow) double(76.8);
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
    for(int i=0;i<5;i++){
   cin>> array[i];
    }
        cout<<"you entered array elements\n";
    for(int i=0;i<5;i++){
   cout<<array[i]<<endl;
    }
    //1D dynamic array deallocation
    delete [] array;
    cout<<"dynamic array successfully deallocated \n";
    }
   
     return 0; 
 }



    
    
    