#include <stdio.h>
int main()
{
    int n;
    printf("Enter number of integers to be stored\t");scanf("%d",&n);
    int numbers[n];
   
    for(int i=0;i<n;i++)
    {
        printf("\nenter element - %d\t",i+1);
        scanf("%d", &numbers[i]);
    }
    printf("Displaying all integers stored in the array\t");
    for(int i=0;i<n;i++)
    printf("%d\n", numbers[i]);
    return 0;
}