#include <stdio.h>
void selectionSort(int a, int arr[])
{
    for (int i = 0; i < a; i++)
    {
        int min = arr[i];
        int pos = i;

        for (int j = i + 1; j < a; j++)
        {
            if (arr[j] < min)
            {
                min = arr[j];
                pos = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[pos];
        arr[pos] = temp;
    }
}

int main()
{
    int a;
    printf("How many ele u want to put? ");
    scanf("%d", &a);
    int arr[a];

    for (int i = 0; i < a; i++)
    {
        printf("Enter the %d element ", &i + 1);
        scanf("%d", &arr[i]);
    }
    selectionSort(a, arr);

    printf("Sorted array: ");
    for (int i = 0; i < a; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}