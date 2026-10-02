// Count local peaks

#include <stdio.h>

int main()
{
    int arr[7];
    int n = sizeof(arr) / sizeof(int);

    for (int i = 0; i < n; i++)
    { // array input
        printf("Enter the value of index %d: ", i);
        scanf("%d", &arr[i]);
    }

    int count = 0;

    for (int i = 1; i < n - 1; i++)
    {
        if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1])
        {
            count++;
        }
    }

    printf("Number of local peaks = %d", count);

    return 0;
}
// Output-->Enter the value of index 0: 3
// Enter the value of index 1: 8
// Enter the value of index 2: 4
// Enter the value of index 3: 9
// Enter the value of index 4: 2
// Enter the value of index 5: 7
// Enter the value of index 6: 4
// Number of local peaks = 3