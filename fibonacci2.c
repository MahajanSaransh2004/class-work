#include<stdio.h>
int fib2(int n)
{
    if(n<=1)
    return n; 
    else
    return fib2(n-1)+fib2(n-2);
}
int fib(int n)
{
    if(n<=1)
    return n;
    else
    return fib(n-1)+fib(n-2);
}
void fib1(int n,int i)
{
    if(i<n)
    {
        printf("%d\n",fib(i));
        fib1(n,i+1);
    }
}
int main()
{
    int n;
    printf("Enter the number of terms:");
    scanf("%d",&n);
    printf("Fibonaccci sequence:\n");
    fib1(n,0);
}