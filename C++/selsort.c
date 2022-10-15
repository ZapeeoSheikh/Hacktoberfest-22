#include <stdio.h>

void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void selectionSort(int arr[], int n)
{
    int i, j, min_idx;

    for (i = 0; i < n-1; i++)
    {
        min_idx = i;
        for (j = i+1; j < n; j++)
          if (arr[j] < arr[min_idx])
            min_idx = j;

        swap(&arr[min_idx], &arr[i]);
    }
}

int main()
{
    int arr[10];
    printf("Enter 10 elements in the array");
    for (int i=0; i < 10; i++)
        scanf("%d ", &arr[i]);
    selectionSort(arr, 10);
    printf("Sorted array: \n");
    for (int i=0; i <10; i++)
        cout<<arr[i]<<"\t";
    cout<<endl;
    return 0;
}
