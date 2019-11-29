#include<stdio.h>
int fun(int max,int mx_i)
{ int i, a[8]={3,4,8,5,100,1518,15,19};
max=a[0];
mx_i=0;
for(i=0;i<8;i++)
   {if (a[i]>max) {max=a[i];mx_i=i;}}
   printf("가장 큰%d은 %d번에 위치한다.\n",max,mx_i);
   }
int jk(int mi_i,int min)
{ int i, a[8]={3,4,8,5,100,1518,15,19};
mi_i=0;
min=a[0];
   for(i=0;i<8;i++)
   {if (a[i]<min) {min=a[i];mi_i=i; }}
   printf("가장 큰%d은 %d번에 위치한다.\n",min,mi_i);}
void main()
{int a[8]={3,4,8,5,100,1518,15,19};
 int max=a[0],mx_i=0,mi_i=0,min=a[0],i,k;
for(i=0;i<8;i++)
{printf("%d.",a[i]);}

printf("\n");
fun(max,mx_i=0);
jk(mi_i=0,min);
}
