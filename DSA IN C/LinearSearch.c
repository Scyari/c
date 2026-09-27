// findingNumberOfElementin array.c

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

    int key;
    printf("Enter the element of search %d: ");
    scanf("%d", &key);

    int index = -1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            index = i;
        }
    }
    if (index == -1)
    {
        printf("not found");
    }
    else
    {
        printf("item found ay %d index\n", index);
    }
    return 0;
}

// Output-->Enter the value of index 0: 23
// Enter the value of index 1: 32
// Enter the value of index 2: 43
// Enter the value of index 3: 43
// Enter the element of search 6422284: 32
// item found ay 1 index
