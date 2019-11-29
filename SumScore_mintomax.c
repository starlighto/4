#include <stdio.h>
void main()
{  
int st[5][9]={10,22,33,44,55,66,77,88,99,14,24,35,46,55,66,77,88,97,10,20,30,40,50,60,70,80,90,12,23,34,45,56,67,78,89,99,19,28,37,46,55,64,73,82,91};
int sum[5]={0,0,0,0,0};
int i,temp,j,k;

  for(i=0;i<5;i=i+1)
{
for(j=0;j<9;j=j+1)
{
printf("%d ",st[i][j]);
sum[i] =sum[i]+st[i][j];
}
printf("합%d\n",sum[i]);
     }
   printf("\n\n결과"); 
  for(i=0;i<5;i=i+1)
{
for(k=i+1;k<5;k=k+1)
{
if (sum[i]>sum[k]) 
{
temp=sum[i];
sum[i]=sum[k];
sum[k]=temp;

for(j=0;j<9;j=j+1)
{
temp=st[i][j];
st[i][j]=st[k][j];
st[k][j]=temp;
}
}
}
}
 printf("\n ");
  for(i=0;i<5;i=i+1)
{
for(j=0;j<9;j=j+1)
{
printf("%d ",st[i][j]);
}
printf("합%d\n",sum[i]);
     }
}
