    #include <stdio.h>

    int main() 
    {
        int a,b,c;
        printf("Enter a number:");
        scanf("%d", &a);
	printf("Enter a number:");
	scanf("%d", &b);
	printf("Enter a number:");
	scanf("%d", &c);
        if(a>b && a>c)
        {
	 printf("a is maximum number");
	}
        if(b>c && b>a)
        {
         printf("b is maximum number");
        }
        else
        {
	 printf("c is maximum number");
	}
        return 0;
    }