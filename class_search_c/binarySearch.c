#include <stdio.h>

void binarySearch(int key, int arr[], int size)
{
    int st, end, mid;
    st = 0;
    end = size - 1;
    mid = (st + end) / 2;
    while (st <= end)
    {
        if (key == arr[mid])
        {
            printf("Found at index %d", mid);
            break;
        }
        else if (key > arr[mid])
        {
            st = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = (st + end) / 2;
    }
    if (st > end)
    {
        printf("Not Found");
    }
}
void main()
{
    int size, key;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter the elements of the array: ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the key to search: ");
    scanf("%d", &key);
    binarySearch(key, arr, size);
}