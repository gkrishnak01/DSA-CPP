#include<iostream>

using namespace std;

int swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b =temp;
}

int partition(int arr[],int low,int high)
{
    int i = low -1;
    int pivot = arr[high];

    for(int j = low; j < high; j++)
    {
        if(arr[j] < pivot)
        {
            swap(&arr[j],&arr[++i]);   
        }     
    }
    swap(&arr[i + 1],&arr[high]);
    return (i + 1);
}

void quickSort(int arr[],int low,int high)
{
    if(low >= high)
        return;
    int pi = partition(arr,low,high);
    quickSort(arr,low,pi-1);
    quickSort(arr,pi + 1,high);
}

int main()
{
    int arr[] = {23,56,12,67,23,78};
    int size = sizeof(arr) / sizeof(arr[0]);
    quickSort(arr,0,size - 1);
    int k;
    cout<<"Enter K:";
    cin>>k;
    if(k > size || k == 0)
        cout<<"K too large or small";
    else
        cout<<arr[k - 1]<<" "<<arr[size - k];
    return 0;

}