#include <stdio.h>

int main() 
{
    char al;
    printf("\nEnter an alphabet:-");
    scanf("%c",&al);
    switch(al)
    {
     case 'a':
     printf("\n vowel");
    break;
    case 'e':
    printf("\n vowel");
   break;
   case 'i':
    printf("\n vowel");
   break;
   case 'o':
    printf("\n vowel");
   break;
   case 'u':
    printf("\n vowel");
   break;
   default:
    printf("\n consonent");
  }
  return 0;
}