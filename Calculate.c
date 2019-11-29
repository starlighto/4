#include <stdio.h>
#include <math.h>

main()
{
int i, j, n1, mass, ibase, k;
float r, x, t, rj, time, vol, temp;

r =1.1; j= 2; i=5; x= 6.1;
k=r; n1=x; t=i; rj=j;

mass=(i+7)/5;
time=x+2.2/r;
vol=r+i/j+13.5;
temp=pow(x-r,2)/j;
ibase=r*j+j*x;

printf("i=%d\nj=%d\nn1=%d\nmass=%d\nibase=%d\nk=%d\nr=%f\nx=%f\nt=%f\nrj=%f\ntime=%f\nvol=%f\ntemp=%f" ,i, j, n1, mass, ibase, k, r, x, t, rj, time, vol, temp);
}

