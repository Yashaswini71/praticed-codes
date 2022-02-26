#include <stdio.h>
int sum()
{
    int a,b;
    printf("\n Enter value of X\t");scanf("%d",&a);
    printf("\n Enter value of Y\t");scanf("%d",&b);
    printf("\nAdding X and Y:\t%d + %d =",a,b);
    return a+b;
}
int main()
{
    int z;
    z=sum();
    printf(" %d",z);
    return 0;
}

#include <stdio.h>
int sum(int a,int b)
{
    printf("\n Enter value of X\t");scanf("%d",&a);
    printf("\n Enter value of Y\t");scanf("%d",&b);
    printf("\nAdding X and Y:\t%d + %d =",a,b);
    return a+b;
}
int main()
{
    int x,y,z;
    z=sum(x,y);
    printf(" %d",z);
    return 0;
}
