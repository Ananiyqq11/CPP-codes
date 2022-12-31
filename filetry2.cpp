#include<iostream> 
#include <fstream> 
    using namespace std; 
  int main() 
 { 
  fstream new_file; 
 new_file.open("new_file.txt",ios::out); 
    if(!new_file)
        { 
    cout<<"File creation failed"; 
        } 
    else 
    { 
  cout<<"New file created"; 
  //after manipulation 
  new_file.close();//close the file
    } 
     return 0; 
 }



    
    
