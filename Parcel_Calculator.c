    #include <stdio.h>

    int main() 
    {
        float weight,charge;
        printf("Enter the weight of the parcel in kg:");
        scanf("%f", &weight);
        if(weight<=0)
	printf("invalid weight");
	else if(weight<=10){
	charge=weight*30;
        printf("The total charge is:Rs.%.2f\n",charge);
	}
	else{
	charge=(10*30)+((weight-10)*20);
         printf("The total charge is:Rs.%.2f\n",charge);
        }
           return 0;
    }