// calculate average

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

    float avg = (float)sum / n;
    printf("\nAverage of elements: %2f", avg);
    return 0;
}
