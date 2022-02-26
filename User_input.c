#include <stdio.h>
int main()
{
char name[20];
 int age;
 printf("Enter your name\n");
 fgets(name,20,stdin);
 printf("Enter your age\n");
 scanf("%d",& age);
 printf("My name is %s I am %d years old\n",name,age);
 return 0;
   }
 
