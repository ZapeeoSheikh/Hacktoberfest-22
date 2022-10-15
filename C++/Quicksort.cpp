#include <bits\stdc++.h>
using namespace std;

int partition(int arr[], int low, int high) {
  int pivot = arr[high];
  int i = (low - 1);
  for (int j = low; j < high; j++) {
    if (arr[j] <= pivot) {
      i++;
      swap(arr[i], arr[j]);
    }
  }
  swap(arr[i + 1], arr[high]);

  return (i + 1);
}

void quickSort(int arr[], int low, int high) {
  if (low < high) {
    int pi = partition(arr, low, high);
    quickSort(arr, low, pi - 1);
    quickSort(arr, pi + 1, high);
  }
}

int main()
{
    int arr[10];
    cout<<"Program for Quick Sort"<<endl<<endl;
    cout<<"Enter 10 elements in the array"<<endl;
    for (int i=0; i < 10; i++)
        cin>>arr[i];
    quickSort(arr, 0, 9);
    cout<<"Sorted array: \n";
    for (int i=0; i <10; i++)
        cout<<arr[i]<<"\t";
    cout<<endl;
    return 0;
}
