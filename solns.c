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
     
     
 int factors( int g ,int ef[] )
{ 
   ef[] ={0};
   int a =2;
   int count = 0;
   int h =0;
  
   for( int j=2; j<a;j++)
 {    a=j;
   
    while( g != 1)
    {
       for( int i=1;i<=a;i++)
        {
          if( a % i ==0)
             { count = count + 1; }
        }
    if (count>2)     
       { 
           if( g % a ==0)
           {  ef[h]=a ;
              h++;
              a++;
              g = g/a;
           }
      
           else 
            a++;
       }
    }

   }
     p = h+1;
    return p
  
   
 }










     


    
  


