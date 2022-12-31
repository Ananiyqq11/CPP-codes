#include<iostream>
using namespace std;
 void fun1(int&x,int*y,int&z);
 void fun2(int&x,int y,int z);

 void fun1(int&x,int*y,int&z)
  { 
    //cout<<"first cout"<<endl;
    cout<<x<<" "<<*y<<" "<<z<<endl;
     *y=*y+x+z;
     z=*y-x-10;
    fun2(x,*y,z);
    //cout<<"third cout"<<endl;
    cout<<x<<" "<<*y<<" "<<z<<endl;
  }
 void fun2(int&x,int y,int z)
  { //cout<<"second cout"<<endl;
    cout<<x<<" "<<y<<" "<<z<<endl;
    y=x+z;
    z=y-x;
    x=z-x-2;
  }
int main()
{
    int a=10,b=50,c=40;
     fun1(a,&b,c);
    //cout<<"fourth cout"<<endl;
   cout <<a<<" "<<b<<" "<<c<<endl;
    return 0;
}