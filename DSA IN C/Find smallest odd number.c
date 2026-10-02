// Find smallest odd number
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

    int smallest = 0;
    int found = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 != 0)
        {
            if (found == 0 || arr[i] < smallest)
            {
                smallest = arr[i];
                found = 1;
            }
        }
    }

    if (found == 1)
        printf("Smallest odd number = %d", smallest);
    else
        printf("No odd number found");

    return 0;
}

// Output-->Enter the value of index 0: 4
// Enter the value of index 1: 6
// Enter the value of index 2: 7
// Enter the value of index 3: 8
// Smallest odd number = 7