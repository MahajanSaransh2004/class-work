#include<stdio.h>
void display();
 void main()
 {
    display(); 
    extern int x;
    x=x+x;
    printf("extern pgm x=%d",x);
 }
