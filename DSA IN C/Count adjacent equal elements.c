// Count adjacent equal elements
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

    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] == arr[i + 1])
        {
            count++;
        }
    }

    printf("Count = %d", count);

    return 0;
}
// Output-->Enter the value of index 0: 2
// Enter the value of index 1: 2
// Enter the value of index 2: 5
// Enter the value of index 3: 7
// Enter the value of index 4: 7
// Enter the value of index 5: 7
// Enter the value of index 6: 2
// Count = 3