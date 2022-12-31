#include<iostream>
#include<string>
using namespace std;
 struct point
   {
   int x=2;
   int y=5;

   };

struct person 
  {
 int id=50000;
 int age=898;
  };
void f(struct person p)
 {
cout<<"person id: "<<p.id<<endl;
cout<<"person age: "<<p.age<<endl;
 }


int main()
{point b;
 person p;
   cout<<"Default Given :"<<endl;
   cout<<"x = " <<b.x<< " " <<"y = " <<b.y<<endl;
 b.x=10;
 b.y=20;
 f(p);
cout<<"After Modifying :"<<endl;
p.id=1990;
p.age=34;
 cout<<"x = " <<b.x<< " " <<"y = " <<b.y<<endl;
f(p);
    //} cout<<"author :"<<book.author<<endl;
    return 0;
}