#include <stdio.h>

int main() 
{
    int a[50],n,key,i;
    printf("Enter size of array:");
    scanf("%d",&n);
    printf("Enter elements:");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("Enter element to search:");
    scanf("%d",&key);
    for(i=0;i<n;i++){
    	if(a[i]==key){
    		printf("Found at position %d\n",i+1);
    		return 0;
		}
	}
	printf("Not found\n");
	return 0;
	  
}
