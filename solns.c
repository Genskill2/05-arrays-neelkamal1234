/* Enter your solutions in this file */
#include <stdio.h>

int max(int z[] , int n)
{ int l =0;
  for( int i=0;i<n;i++){
      if( z[i]>l ){
        l = z[i];
      }
  }
    return l;
  }
     
    
  


