#include <stdio.h>
void sum(int a,int b) 
{
    printf("\n Enter value of X\t");scanf("%d",&a);
    printf("\n Enter value of Y\t");scanf("%d",&b);
    printf("\nAdding X and Y:\t%d + %d = %d",a,b,a+b);
}
int main()
{
    int x,y;
    sum(x,y);
    return 0;
}
