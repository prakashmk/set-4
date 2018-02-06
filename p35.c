#include <stdio.h>
#define MAX_SIZE 100 
int main()
{
 char str[MAX_SIZE];
 int digits, i;
 digits=i=0;
 printf("Enter any string : ");
 gets(str);
  while(str[i]!='\0')
    {
      if(str[i]>='0' && str[i]<='9')
        {
            digits++;
        }
         i++;
        }
   printf("Digits = %d\n", digits);
   return 0;
}
