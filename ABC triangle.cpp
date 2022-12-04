#include<iostream>
using namespace std;

int main()
{
	//your code
	/*
	---
	--
	-
	
	   A
	  B C
	 D E F
	G H I J
	*/
	char a='A';// 65=A  a=97
	int c=65;
	for (int i=1;i<=4;i++)
	{ if(i==1)
   cout<<"    ";
		if(i==2)
   cout<<"   ";
  if(i==3)
   cout<<"  ";
   if(i==4)
   cout<<" ";
		for(int j=1;j<=i;j++)
		{ 
			cout<<char(a)<<" ";
			a++;
		}
		cout<<endl;
	}
	
	
	return 0;
}

















































