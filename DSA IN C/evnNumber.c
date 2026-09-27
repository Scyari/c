// Find Even element

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

    // Even Element
    printf("\nEven Elements: ");
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            printf("\nEven Number : %d, ", arr[i]);
        }
    }

    return 0;
}

// Output-->Enter the value of index 1: 5
// Enter the value of index 2: 87
// Enter the value of index 3: 90
// Array Elements:
// 4, 5, 87, 90,
// Even Elements:
// Even Number : 4,
// Even Number : 90,