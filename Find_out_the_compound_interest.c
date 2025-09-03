#include <stdio.h>
#include<math.h>

int main() 
{
    float p,r,t,ci,a;
    printf("\nEnter principal amount:");
    scanf("%f", &p);
    printf("\nEnter rate of interest:");
    scanf("%f", &r);
    printf("\nEnter the time:");
    scanf("%f", &t);
    a = (1+r);
    ci = p*pow(a,t);
    printf("\nThe compound interest is:%.2f",ci);
    return 0;
}