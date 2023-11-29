#include<stdio.h>
void main()
{
    int age;
    printf("Enter the age");
    scanf("%d",&age);
    if(age>=18&&age<=50)
    {
        if(age>=18&&age<=25)
        { 
            printf("Eligible for a grade job");

        }
        else
        {
            printf("Eligible for b grade job");
        }
        }   
        else
        {
            printf("Not Eligible for the job");

        }
}
    
