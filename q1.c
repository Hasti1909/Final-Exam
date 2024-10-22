// Write a C program find the third angle of a triangle if two angles are given.

#include <stdio.h>
int main()
{
    int firstangle;
    int secondangle;
    int thirdangle;
    
    printf("Enter a value of firstangle:");
    scanf("%d",&firstangle);
    printf("Enter a value of secondangle:");
    scanf("%d",&secondangle);

    thirdangle = 180-(firstangle+secondangle);
    printf("Third angle is:%d",thirdangle);

}