
#include<iostream>
using namespace std;
double n,p,r;
void input()
{
        cout<<"Enter -r-(success)"<<endl;
    cin>>r;

        cout<<"Enter -n-(trails)"<<endl;
    cin>>n;

         cout<<"Enter -p-(probablity) 0<=P<=1"<<endl;
    cin>>p;
}


double Factorial(double n)
{
    int factorial = 1;
    for(int i=1; i<=n; i++){
       factorial = factorial * i;
    }
    return factorial;
}


double power(double base,double exponent)
{
   double total;
   total=1;
   for(int i=0;i<exponent;i++)
   {

       total=total*base;
   }
    return total;
}


double compute()
{
    double result,finalresult,result2;

    result=(Factorial(n))/(Factorial((n-r)))*(Factorial(r));
    result2=(power(p,r))*(power((1-p),(n-r)));
    finalresult=result*result2;

    return finalresult;
}

void Description()
{
    cout<<""<<endl;
    cout<<"the binomial model which is used to determine the probablity of getting "<<endl;
    cout<<"-r-(success) in -n-(trails) is given by the following relation "<<endl;
    cout<<"                  n!    r    n-r "<<endl;
    cout<<"         pr = ........ P (1-P)   "<<endl;
    cout<<"              (n-r)!r!           "<<endl;

}

int main()
{
double answer;
    Description();
    input();
    answer=compute();
    cout<<answer<<endl;
    return 0;
}
