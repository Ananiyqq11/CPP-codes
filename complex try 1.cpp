#include<iostream>
using namespace std;
struct complex
{
float real;
float imaginary;
}a;
void input()
{
cout<<"enter real part\n";
cin>>a.real;
cout<<"enter imaginary part\n";
cin>>a.imaginary;
}
void output()
{
cout<<"real part : "<<a.real<<endl;
cout<<"imaginary part : "<<a.imaginary<<endl;
}
void vme(){
cout<<" Press 1 for input"<<endl;
cout<<" Press 2 for real"<<endl;
cout<<" Press 3 for imaginary"<<endl;
cout<<" Press 4 for conjugate"<<endl;
cout<<" Press 5 for add"<<endl;
cout<<" Press 6 for subtract"<<endl;
cout<<" Press 7 for multiply"<<endl;
cout<<" Press 8 for divide"<<endl;
cout<<" Press 9 for modulus"<<endl;
cout<<"Press 10 for display"<<endl;
cout<<"Press 11 for exit"<<endl;
}

int main()
{
    cout << "Hello,World!\n";
    vme();
    return 0;
}