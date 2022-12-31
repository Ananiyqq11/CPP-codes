#include<iostream>
using namespace std;
 struct movie 
  {
    char title [50];
    int year;
    int nocopy;
  };

 movie get_movie()
 { movie mov;
  cin.getline(mov.title,50);
  cin>>mov.year;
  cin>>mov.nocopy;
  return mov;
 }

int main()
{ 
    movie mov1;
   mov1=get_movie();
  cout << "Title : "<< mov1.title<<endl;
  cout << "Year : "<< mov1.year<<endl;
  cout << "nocopy : "<< mov1.nocopy<<endl;
    
    return 0;
}