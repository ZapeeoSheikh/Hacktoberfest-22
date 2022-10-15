#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n)
{
   int i, j;
   for (i = 0; i < n-1; i++){
       for (j = 0; j < n-i-1; j++)
           if (arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
    }
}

int main()
{
    int arr[10];
    cout<<"Program for Bubble Sort"<<endl<<endl;
    cout<<"Enter 10 elements in the array"<<endl;
    for (int i=0; i < 10; i++)
        cin>>arr[i];
    bubbleSort(arr, 10);
    cout<<"Sorted array: \n";
    for (int i=0; i <10; i++)
        cout<<arr[i]<<"\t";
    cout<<endl;
    return 0;
}
