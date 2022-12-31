#include<iostream>
using namespace std;
double compute(int,int,double);
int main()
{
    cout <<compute();
    return 0;
}
double compute(int,int,double)
{ long perm;
  double s,q,binomial;
  s=n-r;
  q=1-p;
  perm=fact(n)/fact(s)*fact(r);
binomial=perm*power(p,r)*power(q,s);
  return binomial;
}







