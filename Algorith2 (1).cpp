#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int  maxSubsequenceSum( int a[ ], int n){
     int seqStart = 0;
     int seqEnd = -1;
     int maxSum = 0;
        
   for( int i = 0; i < n; i++ ){ 
         int thisSum = 0;
         for( int j = i; j < n; j++ ){ 
                thisSum += a[ j ];
                if( thisSum > maxSum ){
                   maxSum = thisSum;
                   seqStart = i;
                   seqEnd = j ;
               }
          }
     }
     return maxSum;
}

int main(){
    int a [] = {12, -5,  6,  -7,  8,  -1, 2};
    int n = sizeof(a) / sizeof(a[0]);
    cout  <<  maxSubsequenceSum(a, n);
   
    return 0;
}
