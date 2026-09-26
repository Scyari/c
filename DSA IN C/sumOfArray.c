// Sum of array

#include <stdio.h>
int main()
{
    int arr[4];
    int n = sizeof(arr) / sizeof(int);
    for (int i = 0; i < n; i++)
    { // array input
        printf("Enter the value of index %d: ", i);
        scanf("%d", &arr[i]);
    }

    // printing Element
    printf("Array Elements: \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d, ", arr[i]);
    }

    // adding array element
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    printf("\nSum of Array : %d, ", sum);
    return 0;
}

// Output-->Enter the value of index 0: 4
// Enter the value of index 1: 5
// Enter the value of index 2: 7
// Enter the value of index 3: 8
// Array Elements:
// 4, 5, 7, 8,
// Sum of Array : 24,