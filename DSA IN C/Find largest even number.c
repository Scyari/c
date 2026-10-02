// Find largest even number
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

    int largest = 0;
    int found = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            if (found == 0 || arr[i] > largest)
            {
                largest = arr[i];
                found = 1;
            }
        }
    }

    if (found == 1)
        printf("Largest even number = %d", largest);
    else
        printf("No even number found");

    return 0;
}

// Output-->Enter the value of index 0: 5
// Enter the value of index 1: 6
// Enter the value of index 2: 7
// Enter the value of index 3: 8
// Largest even number = 8