#include<bits/stdc++.h>
using namespace std;

class Heap{
    public:
    int arr[100];
    int size = 0;

    void insert(int val){
        size++;
        int i = size;
        arr[i] = val;

        while(i > 1){
            int parent = i/2;
            if(arr[i] > arr[parent]){
                swap(arr[i], arr[parent]);
                i = parent;
            }
            else{
                return;
            }
        }
    }

    void deleteRoot(){
        if(size == 0){
            cout<<"Heap is empty"<<endl;
            return;
        }
        arr[1] = arr[size];
        size--;

        int i = 1;
        while(i < size){
            int left = i*2;
            int right = i*2 + 1;

            if(left < size and arr[i] < arr[left]){
                swap(arr[i], arr[left]);
                i = left;
            }
            else if(right < size and arr[i] < arr[right]){
                swap(arr[i], arr[right]);
                i = right;
            }
            else{
                return;
            }
        }
    }

    void print(){
        for(int i = 1; i <= size; i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};

void heapify(int arr[], int n, int i){
    int largest = i;
    int left = 2*i;
    int right = 2*i + 1;

    if(left < n and arr[largest] < arr[left])
        largest = left;

    if(right < n and arr[largest] < arr[right])
        largest = right;

    if(largest != i){
        swap(arr[i], arr[largest]);
        heapify(arr, n, largest);
    }
}

void heapSort(int arr[], int n){
    int size = n;
    while(size > 1){
        swap(arr[1], arr[size]);
        size--;
        heapify(arr, size, 1);
    }
}

int main()
{
    Heap h;
    h.insert(1);
    h.insert(2);
    h.insert(12);
    h.insert(3);
    h.insert(9);
    h.print();
    h.deleteRoot();
    h.print();
    return 0;
}
