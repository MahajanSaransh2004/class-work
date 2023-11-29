#include<stdio.h>
static int a=10;
void fun1();
void main()
{
   static int a=20; 
   {
    printf("%d\n",a);
    //printf("%d\n",a);
}
fun();
fun();
printf("hello welcome to college");
fun();
}
void fun()
{
    static int a=30,b;
    b=++a;
    printf("coming from fun b =%d\n",b);
}
