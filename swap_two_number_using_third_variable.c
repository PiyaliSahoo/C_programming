    #include <stdio.h>

    int main() 
    {
        int a=10,b=15,c;
        c=a;
        a=b;
        b=c;
        printf("The swaped numbers:a=%d,b=%d",a,b);
        return 0;
    }