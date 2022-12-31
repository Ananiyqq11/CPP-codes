#include<iostream>
using namespace std;

int main()
{
    int row,spa,col;
    for(row=1;row<=4;row++)
    {  
      for(spa=1;spa<=4-row;spa++)
     { cout<<" ";
     
     }
    for(col=1;col<=row*2-1;col++)
     { cout<<"*";
    
     }
      cout<<endl;
    }
    for(row=3;row>=1;row--)
      { for(spa=1;spa<=4-row;spa++)
        {  
        cout<<" ";
        }
      
      for(col=1;col<=2*row-1;col++)
        { 
        cout<<"*";
        }
        cout<<endl;
    }
     
    return 0;
}