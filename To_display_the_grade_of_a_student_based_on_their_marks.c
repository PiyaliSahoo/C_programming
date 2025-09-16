    #include <stdio.h>

    int main() 
    {
        int m;
   	printf("your marks:");
	scanf("%d",&m);
	if(m>=90 && m<=100)
	printf("your grade is A+");
	else if(m>=80 && m<=89)
	printf("your grade is A");
	else if(m>=70 && m<=79)
	printf("your grade is B+");
	else if(m>=60 && m<=69)
	printf("your grade is B");
	else if(m>=50 && m<=59)
	printf("your grade is C+");
	else if (m>=40 && m<=49)
	printf("your grade is C");
	else
	printf("you are failed due to low marks");
        return 0;
    }