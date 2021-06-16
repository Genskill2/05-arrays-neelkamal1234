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
     
int min( int c[] , int m)
{ int s =c[0];
   for( int j=0;j<m;j++){
       if( c[j]<s ){
           s = c[j];
       }
   }
   return s;
}

float average( int a[] , int b)
{ float v =0.0000;
     for( int k=0;k<b;k++){
          v += a[k];
     }
   v = v/2;
 return v;
}
         
     


    
  


