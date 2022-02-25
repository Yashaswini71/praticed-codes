#include <stdio.h>
int main()
{
    int a,b,c=0,d=0;
    printf("\n Enter value of a\t");scanf("%d",&a);
    printf("\nbefore post decrement  a=%d, c=%d",a,c);
    c=a--;
    printf("\nafter post decrement   a=%d, c=%d",a,c);
    printf("\n\n Enter value of b\t");scanf("%d",&b);
    printf("\nbefore pre decrement b=%d, d=%d",b,d);
    d=--b;
    printf("\nafter pre decrement   b=%d, d=%d",b,d);
    return 0;
}