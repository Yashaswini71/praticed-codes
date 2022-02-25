#include <stdio.h>

void scanf_array(int arr[],int n){
    for(int i=0;i<n;i++)
    {
        printf("\nenter element - %d\t",i+1);
        scanf("%d", &arr[i]);
    }
}

int main()
{
    int n;
    printf("Enter number of integers to be stored\t");scanf("%d",&n);
    int numbers[n];
    scanf_array(numbers,n);
    printf("Displaying all integers stored in the array\t");
    for(int i=0;i<n;i++)
    printf("%d\t", numbers[i]);
    return 0;
}
