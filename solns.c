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
   v = v/b;
 return v;
}
    
int mode( int e[] , int h)
{ int counts[h] ;
  int count =0;
  int a =0;
  int d = max(e ,h);

   while( a<=d)
   {   
     for(int i=0;i<h;i++)
       { 
            if( a == e[i])
            {count= count+1;}
             
                   }
            counts[a]=count;
            a++;
            count =0;
        }
            
 int sm =counts[0]; 
 int sl=0;
 
     for( int l=0;l<=d;l++)
       {  
            if( sm < counts[l])
               { sm =counts[l];
                 sl = l;
                }
     }
    
    return sl;         
   }
     



        
int factors(int n,int x[])
{
int i;
int p=0;
for(i=2;n>1;i++)
  {
   while(n%i==0)
    {
    x[p]=i;
    n=n/i;
    p++;
    }
  }
return p;
}
  
   
 










     


    
  


