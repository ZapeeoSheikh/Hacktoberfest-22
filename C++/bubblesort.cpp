#include<iostream>
using namespace std;

void sort(int arr[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp;
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }

    cout<<endl;
    for(int j=0;j<n;j++)
    {
        cout<<arr[j]<<" ";
    }
}

int main()
{
    int n;
    cin>>n;

    int *arr=(int*)malloc(n*sizeof(int));

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    sort(arr,n);

    return 0;
}