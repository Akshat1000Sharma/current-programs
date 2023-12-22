#include<stdio.h>
#include<string.h>

int main()
{
int option;
char sentence[50];
printf("Enter the string: ");
fgets(sentence,50,stdin);
printf("What would you like to do?\n1=upper case to lower case\t2=Lower case to upper case\tAnything else=exit\nYour Answer: ");
scanf("%d",&option);
if (option!=1 && option!=2)    exit(1);
int n=strlen(sentence);

if (option==1)   for (int i = 0; i < n; i++)  if (sentence[i]>64 && sentence[i]<91)    sentence[i]=sentence[i]+32;
else    for (int i = 0; i < n; i++) if (sentence[i]>96 && sentence[i]<123) sentence[i]=sentence[i]-32;

printf("The converted string is: ");
puts(sentence);
return 0;
}