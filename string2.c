#include<stdio.h>
void main()
{
    char str[30];
    printf("Enter the string:");
    gets(str);
    printf("reverse string is:%s",strrev(str));
}