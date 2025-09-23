#include <stdio.h>

int main() {
    char ch='A';
    int r=4;
    for(int i=1;i<=r;i++)
   {
     for(int s=1;s<=r-i;s++)
     {
       printf(" ");
     }
      for(int j=1;j<=i;j++)
      {
        printf("%c",ch++);
      } 
      printf("\n");
   }
    
    return 0;
}