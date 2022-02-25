#include <stdio.h>

void display(int arr[],int n)
{
    printf("Displaying all integers stored in the array\t");
    for(int i=0;i<n;i++)
        printf("\t%d", arr[i]);
}
int main()
{
    int n,d;
    printf("Enter number of integers to be stored\t");scanf("%d",&n);
    int numbers[n];
   
    for(int i=0;i<n;i++)
    {
        printf("\nenter element - %d\t",i+1);
        scanf("%d", &numbers[i]);
    }
    display(numbers,n);
    return 0;
}
