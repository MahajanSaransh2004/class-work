#include<stdio.h>
void main()
{
    int num,arr[30],i,j,k;
    printf("Enter the size of an array:");
    scanf("%d",&num);
    printf("Enter the number of element %d:",num);
    for(i=0;i<num;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<num;i++){
        for(j=i+1;j<num;)
        {
            if(arr[j]==arr[i])
            for(k=j;k<num;k++){
                arr[k]=arr[k+1];
                num--;
                }
            else
                j++;
        }
            }
            for(i=0;i<num;i++){
            printf("Number is %d\n",arr[i]);
        }
}