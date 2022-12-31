#include<iostream>
using namespace std;

int main()
{        int n,fact=1;
    cout << "enter number\n";
    cin>>n;
    for(int i=1;i<=n;i++)
    fact=fact*i;
    cout<<"the factorial of"<<" "<<n<<" "<<"is"<<" "<<fact<<endl;
    return 0;
}