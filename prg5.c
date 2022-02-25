#include <stdio.h>

void scanf_array(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("\nenter element - %d\t",i+1);
        scanf("%d", &arr[i]);
    }
}

void avg_array(int arr[],int n)
{
    int s=0;float a;
    for(int i=0;i<n;i++)
        s+=arr[i];
    a=(float)s/(float)n;
    printf("Average of all elements in the array is\t %0.2f",a);
}

int main()
{
    int n;
    printf("Enter number of integers to be stored\t");scanf("%d",&n);
    int numbers[n];
    scanf_array(numbers,n);
    avg_array(numbers,n); 
    return 0;
}

