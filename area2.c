#include<stdio.h>
void main()
{
    int area1,area2,area3,peri1,peri2,peri3;
    int a;
    printf("1 for area of circle\n 2  for area of square\n 3 for area of rectangle\n");
    printf("Enter your choice");
    scanf("%d",&a); 
    int r,s,l,b;
    switch(a)
    {
        case 1:
        printf("Enter the radius");
        scanf("%d",&r);
        area1=3.14*r*r;
        peri1=2*3.14*r;
        printf("Area of cicle:%d\n",area1);
        printf("Perimeter of circle:%d\n",peri1);
        break;
        case 2:
        printf("Enter the side");
        scanf("%d",&s);
        area2=s*s;
        peri2=4*s;
        printf("Area of square:%d\n",area2);
        printf("Perimeter of square:%d\n",peri2);
        break;
        case 3:
        printf("Enter the length and breadth");
        scanf("%d%d",&l,&b);
        area3=l*b;
        peri3=2*(l+b);
        printf("Area of rectangle:%d\n",area3);
        printf("Perimeter of rectangle:%d\n",peri3);
        break;
        default:
        printf("Zero");
    }


}