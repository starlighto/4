#include <stdio.h>

main()
{
int a,b,c;

for(a=1;a<1000;a=a+1)
{
for(b=1;b<1000;b=b+1)
{
for(c=1;c<1000;c=c+1)
{
if (7500==10*a+100*b+500*c)
{
printf("10원은 %d개\n100원은 %d개\n500원은%d개\n",a,b,c);
goto EXIT;
}
}
}
}

EXIT:;}
