#include <stdio.h>
even_number()
 {
    int i,sum=0;
    for(i=2;i<=10*2;i=i+2)
    {
    	sum=sum+i;
	}
    printf("The sum of even_numberis=%d",sum);
}
    int main()
   {
    even_number();
    return (0);
}
