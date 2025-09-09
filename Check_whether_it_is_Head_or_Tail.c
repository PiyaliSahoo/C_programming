    #include <stdio.h>

    int main() 
    {
        char a;
        printf("Enter h for head and t for tail:");
        scanf("%c", &a);
        if(a=='t')
        {
	 printf("a is tail");
	}
        if(a!='t')
        {
         printf("a is head");
        }
        return 0;
    }