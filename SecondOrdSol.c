#include <stdio.h>
#include <math.h>

main() 
{
float a,b,c,d,x1,x2;

A:
scanf("%f %f %f",&a,&b,&c);

d=b*b-4*a*c;
x1=(-b+sqrt(d))/(2*a);
    x2=(-b-sqrt(d))/(2*a);

if(a==0) 
{  printf("a=0");
goto A;
}
else
{if (d==0) 
printf("%f",x1);
else if (d>0)
printf("%f,%f",x1,x2);
else       
printf("실수범위에해가존재하지않습니다"); 

}
}
