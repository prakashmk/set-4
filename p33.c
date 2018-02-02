
#include<stdio.h>
int main()
{
char str[100];
int c=0,i=0;
printf("\n Enter the string");
gets(str);
while(str[i]!='\0'){
if(str[i]==' '||str[i]=='\n'||str[i]=='\t')
{
c++;}
i++;}
printf("\n white space is %d",count);
return 0;
}
