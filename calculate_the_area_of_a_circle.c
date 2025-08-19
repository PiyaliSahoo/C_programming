#include <stdio.h>

int main() 
{
    float r,ar;
    printf("\nEnter the radius:");
    scanf("%f", &r);
    ar=3.14*r*r;
    printf("\nThe area of the circle is:%f",ar);
    return 0;
}