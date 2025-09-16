    #include <stdio.h>

    int main() 
    {
        float sa,in;
        printf("Enter basic salery\n:");
        scanf("%f",&sa);
        if(sa>=30000 && sa<50000)
       {
        in=sa+0.15*(sa)+0.10*(sa)+0.05*(sa);
	 printf("%f is your total income\n",in);
	}
        else if(sa>=50000)
        {
         in=sa+0.20*(sa)+0.10*(sa)+0.05*(sa);
         printf("%f is your total income.\n",in);
        }
        else
        {
         in=0.10*(sa)+0.05*(sa)+sa;
	 printf("%f is your total income.\n",in);
	}
        return 0;
    }