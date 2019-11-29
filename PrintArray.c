#include<stdio.h>

void main()
{
   int A[3][4],B[4][5], sum;
   int i,j,a,b,k,C[3][5];
  
for(i=0;i<3;i++)
   {
       for(j=0;j<4;j++)
       {
        A[i][j]=i+j;
       }
  }

for(i=0;i<4;i++)
   {
       for(j=0;j<5;j++)
       {
        B[i][j]=i+j;
       }
  }
//[A]
printf("\n[A]\n");
   for(i=0;i<3;i++)
   {printf("\n ");
       for(j=0;j<4;j++)
       {
           printf("%d ",A[i][j]);
         
       }
       printf("\n");
   }
   //[B]
        printf("\n[B]\n");  
   for(i=0;i<4;i++)
   {printf("\n ");
       for(j=0;j<5;j++)
       {
           printf("%d ",B[i][j]);
         
       }
       printf("\n");
   }
   //[C]
    printf("\n[C]\n");  
   for(i=0;i<3;i++)
   {
printf("\n ");
        for(j=0;j<5;j++)
         {
sum = 0;
for(k=0;k<4;k++)
sum = sum + A[i][k]*B[k][j];
printf("%d ",sum);
          }
       printf("\n");
   }
}
