#include <stdio.h>
void rect_area(int base, int height)
{
int area;
area = base * height
printf("\nThe area of the rectangle is ");
printf("area = %d\n", area);
}
void main(void)
{
int length, width;
printf("What is the length of the rectangle?\nlength = ");
scanf("%d", &length);
printf("\nWhat is the width of the rectangle?\nwidth = ");
scanf("%d", &width);
rect_area(length, width);
}
