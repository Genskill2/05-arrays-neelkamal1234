/* Enter your solutions in this file */
#include <stdio.h>

int max(int z[] , int n)
{ int l = z[0];
  for( int i=1;i<n;i++){
      if( z[i]>l ){
        l = z[i];
      }
  }
    return l;
  }
     
int min( int c[] , int m)
{ int s = c[0];
   for( int i=1;i<m:i++){
       if( c[i]<s ){
           s = c[i];
       }
   }
   return s;
}
    
  


