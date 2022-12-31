#include<iostream>
using namespace std;
 void copy(char o[],char temp[],int totalsize){
    for(int i=0;i<totalsize;i++){
     o[i]=temp[i];}}
void delet (char names[][20],int&currentsize,int deletedindex,int totalsize){
   for(int i=deletedindex;i<currentsize;i++){
  copy(names[i],names[i+1],totalsize);
    }currentsize--;
   }
void print(char names[][20],int totalsize){
   for(int i=0;i<totalsize;i++){
    cout<<names[i]<<endl;
     }}
int main()
{ 
 char names [][20]={ "Alice", "Lewis", "Quintillion", "Boutechelli", "Anonymous" };
  int totalsize=100;
  int currentsize=5;
  int deletedindex;
   print(names, currentsize);
  // cout<<currentsize<<endl;
    cout << "enter element index to be deleted\n";
    cin>>deletedindex; deletedindex--;
    delet(names, currentsize, deletedindex, 20);
    //cout<<currentsize<<endl;
    print(names, currentsize);
   return 0; 
}





