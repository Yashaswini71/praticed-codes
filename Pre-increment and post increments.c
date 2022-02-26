#include <stdio.h>
int main()
{
    int a,b;
    printf("\n Enter value of a\t");scanf("%d",&a);
    printf("\nbefore post increment  a=%d",a);
    a++;
    printf("\nafter post increment   a=%d",a);
    printf("\n\n Enter value of b\t");scanf("%d",&b);
    printf("\nbefore pre increment b=%d",b);
    ++b;
    printf("\nafter pre increment   b=%d",b);
    return 0;
}
