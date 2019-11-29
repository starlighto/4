#include <stdio.h>
void main()
{  
int a[5]={2,4,5,9,10};
int b[4]={1,3,5,6};
int c[9]={0,0,0,0,0,0,0,0,0};
int i,j,k;

printf("A배열'\n");
  for(i=0;i<5;i=i+1)
{
printf("%d ",a[i]);
}
printf("\n\nB배열'\n");

  for(i=0;i<4;i=i+1)
{
printf("%d ",b[i]);
}

  printf("\n\nC배열'\n"); 
 for(i=0;i<5;i=i+1)
 {
for(j=0;j<4;j=j+1)
     if(a[i]==10,b[j]==6);
break
     if (a[i]<b[j])
{
c[k]=a[i];
i=i+1;
k=k+1;
}
else 
{
c[k]=b[j];
j=j+1;
k=k+1;
}
printf("%d ",c[k]);  
 }
}
