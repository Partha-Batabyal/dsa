#include <stdio.h>
void linearSearch(int key, int arr[], int n)
{
    int j = 0;

    for (int i = 0; i < n; i++)
    {
        if (key == arr[i])
        {
            printf("Found at index %d", i + 1);
            j++;
            break;
        }
    }
    if (j == 0)
    {
        printf("Not Found");
    }
}
void main()
{
    printf("Enter the fast number ");
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter the number ");
        scanf("%d", &arr[i]);
    }
    int key;
    printf("Enter the key to search ");
    scanf("%d", &key);

    linearSearch(key, arr, n);
}