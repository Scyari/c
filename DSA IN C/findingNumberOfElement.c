// findingNumberOfElement.c

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
    printf("Array Elements: \n");
    for (int i = 0; i < n; i++)
    { // arrayOutput
        printf("%d -> %d\n", i, arr[i]);
    }
    return 0;
}

// output-->Enter the value of index 2:
// 10
// Enter the value of index 3: 13
// Array Elements:
// 0 -> 10
// 1 -> 12
// 2 -> 10
// 3 -> 13
