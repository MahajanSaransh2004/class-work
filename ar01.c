#include<stdio.h>
void main()
{
    int arr[10];
    int i,n;
    printf("Enter the size of an array:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter the value of array %d\n",i);        
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("\n%d",arr[i],*(i+arr),*(arr+i),i[arr]);
    }
}