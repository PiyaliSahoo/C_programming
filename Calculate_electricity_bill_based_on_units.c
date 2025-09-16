    #include <stdio.h>

    int main() 
    {
        float u;
        printf("Enter your total unit:");
        scanf("%f",&u);
        if(u<=100)
	 printf("%f is your total bill",5*u);
        else if(u>100 && u<=200)
         printf("%f is your total bill",7*u);
        else
	 printf("%f is your total bill",10*u);
        return 0;
    }