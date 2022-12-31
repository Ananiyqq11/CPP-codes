#include<iostream>
#include<fstream>
using namespace std;

int main()
{ 
    ofstream a("st.txt");
     a<<"voila Sasha\n";
    cout << "Hello,World!\n";
    a.close();
    
    char as[20];
    ifstream b("st.txt");
    while(b)
    {
    b.getline(as,20);
    cout<<as<<endl;
    }
    b.close();
    
    cout << "Hello,World!\n";
    return 0;
}