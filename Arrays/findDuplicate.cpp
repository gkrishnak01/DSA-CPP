#include<iostream>

using namespace std;

void swap(int *a,int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partititon(int arr[],int low,int high)
{
    int pivot = arr[high];
    int i = low - 1;
    for(int j = low; j < high; j++)
    {
        if(arr[j] < pivot)
        {
            i++;
            swap(&arr[i],&arr[j]);
        }
    }
    swap(&arr[i + 1],&arr[high]);
    return (i + 1);
}

void quickSort(int arr[],int low,int high)
{
    if(low >= high)
        return;
    int pi = partititon(arr,low,high);
    quickSort(arr,low,pi - 1);
    quickSort(arr,pi + 1,high);
}

int findDuplicate(int arr[],int size)
{
    quickSort(arr,0,size -1);
    for(int i = 0; i < size; i++)
    {
        if(i + 1 != arr[i]) return i;
    }
    return -1;
}


int main()
{
    int arr[] = {1,1,6,7,8,3,2,4,5,9};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout<<findDuplicate(arr,size);
    return 0;
}