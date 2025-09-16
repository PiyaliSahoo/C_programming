    #include <stdio.h>

    int main() 
    {
        int low,up,i,j,pr;
        printf("Enter lower limit:");
        scanf("%d",&low);
        printf("Enter upper limit:");
        scanf("%d",&up);
	printf("prime numbers between %d and %d are:",low,up);
	for(i=low;i<=up;i++)
       {
	if(i<2)
       {
        continue;
       }
       pr=1;
       for(j=2;j<=i/2;j++)
       {
        if(i%j==0)
       {
        pr=0;
        break;
       }
      }
      if(pr==1)
      {
       printf("%d",i);
      }
     }
      printf("\n");
      return 0;
     }
        