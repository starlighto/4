#include<stdio.h>
#include<math.h>

float fun(float R, float A, float N, float Y)
{
float result,a,b;
a=R*A
b=N*(1-pow(1+R/N,-N*Y));

result=a/b;
return result;
}

void main()
{
float R,A,N,Y,F;
printf("R,A,N,Y순서대로);
scanf("%f,%f,%f,%f", &R,&A,&N,&Y);

F = fun(R,A,N,Y);

printf ("%f" ,F);
}
