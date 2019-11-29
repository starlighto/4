#include <stdio.h>

void main()
{
  float S,i,b,c;
  
 
  S=0;
  b=1;
  c=0;
  i=0;
  
a:
  i=i+1;
  b=b*i;
  c=c+i;
  S=S+b/c;
 
  if (i<10) goto a;
  

 printf("%f", S);
}
