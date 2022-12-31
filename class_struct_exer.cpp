#include<iostream>
using namespace std;
 struct movie 
  {
    char title [50];
    int year;
    int nocopy;
  };

 void get_movie(movie&mov)
 {
  cin.getline(mov.title,50);
  cin>>mov.year;
  cin>>mov.nocopy;
 }

int main()
{ 
    movie mov1;
   get_movie(mov1);
  cout << "Title : "<< mov1.title<<endl;
  cout << "Year : "<< mov1.year<<endl;
  cout << "nocopy : "<< mov1.nocopy<<endl;
    
    return 0;
}