    #include <stdio.h>

    int main() 
    {
        int a,b,c;
        printf("Enter three number:");
        scanf("%d %d %d", &a,&b,&c);
        if(a>b && a>c)
        {
	 printf("The first number is greatest");
	}
        if(b>c && b>a)
        {
         printf("The second number is greatest");
        }
        else
        {
	 printf("The third number is greatest");
	}
        return 0;
    }