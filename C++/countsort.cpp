#include <iostream>
using namespace std;

void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int max(int arr[], int n)
{
    int max = arr[0];

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }

    return max;
}

void sort(int arr[], int n, int max)
{
    int *aux = (int *)malloc((max + 1) * (sizeof(int)));

    for (int i = 0; i < max + 1; i++)
    {
        aux[i] = 0;
    }
    for (int j = 0; j < n; j++)
    {
        aux[arr[j]]++;
    }

    int p = 0;

    for (int i = 0; i < max + 1; i++)
    {
        if (aux[i] == 0)
            continue;

        else
        {
            while (aux[i] != 0)
            {
                arr[p] = i;
                aux[i] = aux[i] - 1;
                p++;
            }
        }
    }
}

int main()
{
    int n;
    cin >> n;

    int *arr = (int *)malloc(n * (sizeof(int)));

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    print(arr, n);
    cout << endl;

    int maxi = max(arr, n);

    sort(arr, n, maxi);
    print(arr,n);
}