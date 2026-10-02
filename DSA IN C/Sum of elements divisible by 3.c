

// "Sum of elements divisible by 3.c"
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

    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 3 == 0)
        {
            sum = sum + arr[i];
        }
    }

    printf("Sum of elements divisible by 3 = %d", sum);

    return 0;
}

// Output-->Enter the value of index 0: 4
// Enter the value of index 1: 6
// Enter the value of index 2: 7
// Enter the value of index 3: 8
// Sum of elements divisible by 3 = 6
