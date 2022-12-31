#include<iostream>
#include<fstream>
using namespace std;

int main()
{
  cout << "Hello,World!\n";
  char str[50]="This is an example \n it is indeed \n a good one";
  ofstream o;
    o.open("abc.txt");
  for(int i=0;str[i]!='\0';i++)
  { 
    o.put(str[i]);
  }
  cout<<"\n data written successfully to file\n";
  o.close();
  ifstream in;
    in.open("abc.txt");
   char ch;
  while(in)
  {
  in.get(ch);
  cout<<ch;
  }
    in.close();   
    
    return 0;
}