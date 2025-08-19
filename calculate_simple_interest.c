#include <stdio.h>

int main() 
{
    float p,r,t;
    printf("Enter principal amount:");
    scanf("%f", &p);
    printf("Enter rate of interest:");
    scanf("%f", &r);
    printf("Enter time in years:");
    scanf("%f", &t);
    float simpleinterest=(p*r*t)/100;
    printf("simple interest=%f\n",simpleinterest);
    return 0;
}