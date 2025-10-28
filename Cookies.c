    #include <stdio.h>

    int main() 
    {
        int totalcookies, cookiesperbox, boxespercontainer;
	int boxes, containers;
        printf("Enter total number of cookies: ");
        scanf("%d", &totalcookies);
	printf("Enter number of cookies in one box: ");
	scanf("%d", &cookiesperbox);
	printf("Enter number of boxes in one container: ");
	scanf("%d", &boxespercontainer);
	boxes = totalcookies / cookiesperbox;
        if (totalcookies % cookiesperbox !=0)
	     boxes++;
	containers = boxes / boxespercontainer;
	if (boxes % boxespercontainer != 0)
	    containers++;
        printf("\nnumber of boxes required:%d\n",boxes);
        printf("Number of containers required:%d\n",containers);
           return 0;
    }