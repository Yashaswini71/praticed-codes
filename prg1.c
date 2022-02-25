#include <stdio.h>
int main()
{
    int numbers[5];
    printf("Enter 5 integers:\n");
    for(int i=0;i<5;i++)// taking elements of an array from user
        scanf("%d", &numbers[i]);
   
    printf("Displaying integers:\n");
    for(int i=0;i<5;i++)// printing elements of an array
        printf("%d\n", numbers[i]);
    return 0;
}

