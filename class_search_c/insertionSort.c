#include <stdio.h>
void insertionSort(int a, int arr[])
{

    for (int i = 1; i < a; i++)
    {

        int temp = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > temp)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;
    }
}
int main()
{
    int a;
    printf("How many ele u want to put?");
    scanf("%d", &a);
    int arr[a];
    printf("Enter the elements");
    for (int i = 0; i < a; i++)
    {
        scanf("%d", &arr[i]);
    }
    insertionSort(a, arr);
    return 0;
}