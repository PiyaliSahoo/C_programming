#include <stdio.h>
#include<math.h>

int main() 
{
    float l,b;
    float a,p;
    printf("Enter the length of the rectangle:");
    scanf("%f", &l);
    printf("Enter the breadth of the rectangle:");
    scanf("%f", &b);
    a = l*b;
    p = 2*(l+b);
    printf("Area of the rectangle:%f\n",a);
    printf("perimeter of the rectangle:%f\n",p);
    return 0;
}