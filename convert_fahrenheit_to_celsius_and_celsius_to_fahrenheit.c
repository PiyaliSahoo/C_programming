#include <stdio.h>

int main() 
{
    float c1,c2,f1,f2;
    printf("\nEnter the fahrenheit temperature:");
    scanf("%f", &f1);
    c1=(f1-32)*5/9;
    printf("\nThe celcius temperature is:%f",c1);
    printf("\nEnter the celcius temperature:");
    scanf("%f", &c2);
    f2=(c2*9/5)+32;
    printf("\nThe fahrenheit temperature:%f",f2);
    return 0;
}