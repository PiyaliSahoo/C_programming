    #include <stdio.h>

    int main() 
    {
        int a[50],n,i,odd=0,even=0;
        printf("Enter size of array:");
        scanf("%d",&n);
	printf("Enter elements:");
	for(i=0;i<n;i++){
	scanf("%d", &a[i]);
	if(a[i] % 2 == 0)
	even++;
	else
	odd++;
}
	 printf("oddcount=%d\n Evencount=%d\n",odd,even);
        return 0;
    }
