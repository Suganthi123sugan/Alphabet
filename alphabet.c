#include <stdio.h>

int main()
{
   char c;
   printf("enter your variable");
   scanf("%c",&c);
   if ((c>='a' && c<='z')||(c>='A' && c<='Z'))
    {
        printf("Alphabet");
    }
    else
    {
        printf("Not Alphabet");
    }
}
