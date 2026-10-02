// Count elements greater than a given number
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

    int num;
    int count = 0;

    printf("Enter the number: ");
    scanf("%d", &num);

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > num)
        {
            count++;
        }
    }

    printf("Count = %d", count);

    return 0;
}
