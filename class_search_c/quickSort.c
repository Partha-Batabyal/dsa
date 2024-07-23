#include <stdio.h>
int part(int arr[], int l, int h)
{

    int key = arr[l];
    int i = l + 1;
    int j = h;
    int temp;
    do
    {
        while (arr[i] < key)

        {
            i++;
        }
        while (arr[j] > key)
        {
            j--;
        }
        if (i < j)
        {
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    } while (i < j);

    temp = arr[l];
    arr[l] = arr[j];
    arr[j] = temp;
    return j;
}

void quickSort(int arr[], int l, int h)
{
    if (l < h)
    {
        int partIndex = part(arr, l, h);
        quickSort(arr, partIndex + 1, h);
        quickSort(arr, l, partIndex - 1);
    }
}
int main()
{
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("enter the number");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    quickSort(arr, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}