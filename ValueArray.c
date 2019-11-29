#include <stdio.h>
void fun (int *x, int *y, int *z);
void main(void)
{
int i = 5;
int array_A[3] = {1, 2, 3};
int array_B[3] = {8, 9, 10};
printf("Initial value of i: %d\n", i);
printf("Initial value of array_A[0]: %d\n", array_A[0]);
printf("Initial value of array_B[0]: %d\n", array_B[0]);
fun(&i, &array_A[0], array_B);
printf("Final value of i: %d\n", i);
printf("Final value of array_A[0]: %d\n", array_A[0]);
printf("Final value of array_B[0]: %d\n", array_B[0]);
}
void fun (int *x, int *y, int *z)
{
*x = 20;
*y = 21;
*z = 22;
}
