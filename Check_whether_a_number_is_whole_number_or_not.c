    #include <stdio.h>

    int main() 
    {
        int a;
        printf("Enter a whole number:");
        scanf("%d", &a);
        if(a>=0);
        {
	 printf("%d is a whole number:\n",a);
	}
        if(a<0)
        {
         printf("%d is not a whole number:\n",a);
        }
        return 0;
    }