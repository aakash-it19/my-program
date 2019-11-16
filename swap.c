#include<stdio.h>
void swap(int *x,int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
    
}
    int main()
{
    int a=5,b=10;
    printf("%d %d",a,b);
    swap(&a,&b);
    printf("\n%d %d",a,b);
}
