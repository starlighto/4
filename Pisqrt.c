#include<stdio.h>
#include<math.h>

void main()
{
float k,i, n;
i=0;
k=0;

for(n=0;n<=50;n++)
{
k=sqrt(6*(i));
    i=1/n*n;
    printf("n=%f일때파이값%f ",n,k);
    i=1/n*n+i;
printf("\n");
}

}
