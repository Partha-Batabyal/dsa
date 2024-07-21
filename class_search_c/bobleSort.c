#include <stdio.h>
void boble(int a, int arr[])
{
    for (int i = 0; i < a - 1; i++)
    {
        for (int j = 0; j < a - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("Sorted array:");
    for (int n = 0; n < a; n++)
    {
        printf("%d ", arr[n]);
    }
}
int main()
{
    int a;
    printf("How many ele u want to put? ");
    scanf("%d", &a);
    int arr[a];
    printf("Enter the elements:");
    for (int i = 0; i < a; i++)
    {
        scanf("%d", &arr[i]);
    }
    boble(a, arr);
}