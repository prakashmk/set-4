#include<stdio.h>
int main()
{
char str[100];
int c=0,i=0;
printf("\n Enter the string:");
gets(str);
while(str[i]!='\0'){
if(str[i]=='.')
{
c++;}
i++;}
printf("\n line in paragraph is: %d",c);
return 0;
}
