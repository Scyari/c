// Count elements greater than average
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
    float average;
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }

    average = (float)sum / n;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > average)
        {
            count++;
        }
    }

    printf("Average = %.2f\n", average);
    printf("Count = %d", count);

    return 0;
}
// Enter the value of index 0: 5
// Enter the value of index 1: 67
// Enter the value of index 2: 87
// Enter the value of index 3: 89
// Average = 62.00
// Count = 3