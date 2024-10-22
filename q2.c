// C program to find sum of elements of a matrix.

#include <stdio.h>
int main()
{
    int i;
    int sum;
    printf("Enter array size:");
    scanf("%d",&i);

    int array[i];
    printf("Enter array[0]:");
    scanf("%d",&array[0]);
    printf("Enter array[1]:");
    scanf("%d",&array[1]);
    printf("Enter array[2]:");
    scanf("%d",&array[2]);
    printf("Enter array[3]:");
    scanf("%d",&array[3]);
    printf("Enter array[4]:");
    scanf("%d",&array[4]);

    sum = array[0]+array[1]+array[2]+array[3]+array[4];

    printf("Sum of element:%d",sum);

}