// Write a program in C to find a cube of any number using user define function. 

#include <stdio.h>
int main()
{
    int a;
    int cube;
    printf("Enter a value of a:");
    scanf("%d",&a);

    cube = a*a*a;
    printf("Cube is:%d",cube);
}