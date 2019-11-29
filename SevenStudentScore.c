#include<stdio.h>

void main()
{
   int sum[7]={0,0,0,0,0,0,0},total[9]={0,0,0,0,0,0,0,0,0};
   int max,mx_i=0,mi_i=0,min,i,j,k,st[7][9];
   
for(i=0;i<7;i=i+1)
   {
       for(j=0;j<9;j=j+1)
       {
        st[i][j]=i+j+1;
       }
  }


   for(i=0;i<7;i=i+1)
   {printf("\n ");
       for(j=0;j<9;j=j+1)
       {
           printf("%d ",st[i][j]);
           sum[i]=sum[i]+st[i][j];
       }
       printf("sum %d ",sum[i]);
       printf("\n");
   }

   for(j=0;j<9;j=j+1)
   { 
       for(i=0;i<7;i=i+1)
          {
           total[j]=total[j]+st[i][j];
          }
       printf(" %d ", total[j]);
   }

   max=sum[0];
   min=sum[0];

    printf("\n");

   for(i=0;i<7;i=i+1)
if (sum[i]>max) {max=sum[i]; mx_i=i;}
   printf("\n최고점");

   for(j=0;j<9;j=j+1)
   {
printf("%d ", st[mx_i][j]);
   }
    printf(" %d \n",max);

   sum[0]=90;

   for(i=0;i<7;i=i+1)
if (sum[i]<min) {min=sum[i];mi_i=i;}
   printf("최저점");

   for(j=0;j<9;j=j+1)
   {
printf("%d ", st[mi_i][j]);
   }
    printf(" %d",min);

}
